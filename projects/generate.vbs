Option Explicit

Dim FSO
Set FSO = CreateObject("Scripting.FileSystemObject")

' opendune_vs140.sln             is for MSVC 2015
' opendune_vs140.vcxproj         is for MSVC 2015
' opendune_vs140.vcxproj.filters is for MSVC 2015
' version_vs140.vcxproj         is for MSVC 2015

' opendune_vs120.sln             is for MSVC 2013
' opendune_vs120.vcxproj         is for MSVC 2013
' opendune_vs120.vcxproj.filters is for MSVC 2013
' version_vs120.vcxproj         is for MSVC 2013

' opendune_vs100.sln             is for MSVC 2010
' opendune_vs100.vcxproj         is for MSVC 2010
' opendune_vs100.vcxproj.filters is for MSVC 2010
' version_vs100.vcxproj         is for MSVC 2010

' opendune_vs90.sln              is for MSVC 2008
' opendune_vs90.vcproj           is for MSVC 2008
' version_vs90.vcproj           is for MSVC 2008

' opendune_vs80.sln              is for MSVC 2005
' opendune_vs80.vcproj           is for MSVC 2005
' version_vs80.vcproj           is for MSVC 2005



' First, collect the list of Windows files
Dim graph_config, sound_config, os
graph_config = ""	' default is WinAPI: "" to default
sound_config = ""
os = "MSVC"

Sub safety_check(sourcelist_file)
	Dim file, line, regexp, list

	' Define regexp
	Set regexp = New RegExp
	regexp.Pattern = "#|audio/dsp_sdl.c|os/thread_sdl.c|video/video_sdl"
	regexp.Global = True

	' We use a dictionary to check duplicates
	Set list = CreateObject("Scripting.Dictionary")

	Set file = FSO.OpenTextFile(sourcelist_file, 1, 0, 0)
	While Not file.AtEndOfStream
		line = Replace(file.ReadLine, Chr(9), "") ' Remove tabs
		If Len(line) > 0 And Not regexp.Test(line) Then
			'line = FSO.GetFileName(line)
			If list.Exists(line) Then
				WScript.Echo " !! ERROR !!" _
				& vbCrLf & "" _
				& vbCrLf & "The filter/filename '" & line & "' is already defined in source.list file." _
				& vbCrLf & "This could cause duplicate definitions into same MSVC directory (filter)" _
				& vbCrLf & "for same object files." _
				& vbCrLf & "Please rename/remove either one of the file and try generating again." _
				& vbCrLf & "" _
				& vbCrLf & " !! ERROR !!"
				WScript.Quit(1)
			End If
			list.Add line, line
		End If
	Wend
	file.Close
	WScript.Echo "safety_check passed."
End Sub

Sub get_files(dir, list)
	Dim file, path_name, arr_path_name, i
	Dim rekeep, reskip

	' pattern for files to keep
	Set rekeep = New RegExp
	rekeep.Pattern = "\.h$|\.c$|rev\.c\.in"
	rekeep.Global = True

	' pattern for files to exclude
	Set reskip = New RegExp
	reskip.Pattern = "\.svn"
	reskip.Global = True

	If dir.Files.Count = 0 Then
		path_name = Replace(dir, ROOT_DIR & "\", "") ' Remove root folder and add only folder name
		path_name = Replace(path_name, "\", "/") ' Replace separators
		list.Add path_name, "folder"
	End If

	For Each file in dir.Files
		path_name = Replace(file.path, ROOT_DIR & "\", "") ' Remove root folder
		path_name = Replace(path_name, "\", "/") ' Replace separators
		If rekeep.Test(path_name) And Not reskip.Test(path_name) Then
			list.Add path_name, "file"
		Else
			arr_path_name = Split(path_name, "/")
			path_name = ""
			For i = 0 To UBound(arr_path_name) - 1
				path_name = path_name & arr_path_name(i) & "/"
			Next
			path_name = Left(path_name, Len(path_name) - 1)
			list.Add path_name, "folder"
		End If
	Next
End Sub

Sub get_dir_files(dir, list)
	Dim folder
	' Get files
	get_files dir, list

	' Recurse in subfolders
	For Each folder in dir.SubFolders
		get_dir_files folder, list
	Next
End Sub

Function load_main_data(sourcelist_file, ByRef vcxproj, ByRef filters, ByRef files)
	Dim res, file, line, deep, skip, first_filter, first_file, filter, subfilter, arr_previous, cltype, counter, index
	Dim source_list, dir_filter, files_list, folder, full_file_path, main_folder, file_path
	Dim filter_list, arr_path, i, arr_filter, excluded_list, tab, sublevel

	res = ""
	Set source_list = CreateObject("Scripting.Dictionary")

	' Read the source.list and process it
	Set file = FSO.OpenTextFile(sourcelist_file, 1, 0, 0)

	While Not file.AtEndOfStream
		line = Replace(file.ReadLine, Chr(9), "") ' Remove tabs
		'line = Replace(file.ReadLine, " ", "") ' Remove spaces
		If Len(line) > 0 Then
			Select Case Split(line, " ")(0)
				Case "#endif"
					If deep = skip Then skip = skip - 1
					deep = deep - 1
				Case "#else"
					If deep = skip Then
						skip = skip - 1
					ElseIf (deep - 1 = skip) Then
						skip = skip + 1
					End If
				Case "#if"
					line = Replace(line, "#if", "")
					line = Replace(line, " ", "")
					If deep = skip And ( _
						(line = "SDL" And graph_config = "SDL") Or _
						(line = "SDL2" And graph_config = "SDL2") Or _
						(line = "SDL" And sound_config = "SDL" And Not (os = "MSVC" Or os = "MINGW" Or os = "CYGWIN") ) Or _
						(line = "SDL2" And sound_config = "SDL2" And Not (os = "MSVC" Or os = "MINGW" Or os = "CYGWIN") ) Or _
						(line = "PULSE" And sound_config = "PULSE") Or _
						(line = "ALSA" And sound_config = "ALSA") Or _
						(line = "WIN32" And (os = "MSVC" Or os = "MINGW" Or os = "CYGWIN") ) Or _
						(line = "OSX" And os = "OSX") _
					) Then
						skip = skip + 1
					End If
					deep = deep + 1
				Case "#"
					'Do Nothing

				Case Else
					If deep = skip Then
						line = Replace(line, "/" ,"\")
						If source_list.Exists(line) Then
							source_list.Item(line) = "included"
						Else
							source_list.Add line, "included"
						End If
					Else
						line = Replace(line, "/" ,"\")
						If Not source_list.Exists(line) Then
							source_list.Add line, "excluded"
						End If
					End If
			End Select
		End If
	Wend
	file.Close()


	' pattern for folders to search from the root
	Set dir_filter = New RegExp
	dir_filter.Pattern = "src|include"
	dir_filter.Global = True
	Set files_list = CreateObject("Scripting.Dictionary")

	For Each folder in FSO.GetFolder(ROOT_DIR).SubFolders
		If dir_filter.Test(folder.Name) Then
			get_dir_files folder, files_list
		End If
	Next

	counter = -1
	index = 0
	tab = ""
	Set filter_list = CreateObject("Scripting.Dictionary")

	' Compare files in source.list
	For Each full_file_path In files_list
		filter = ""
		main_folder = Split(full_file_path, "/")(0)

		If files_list.Item(full_file_path) = "folder" Then
			filter = full_file_path
		Else
			arr_path = Split(full_file_path, "/")
			For i = 0 To UBound(arr_path) - 1
				filter = filter & arr_path(i) & "/"
			Next
			filter = Left(filter, Len(filter) - 1)
		End If
		filter = Replace(filter, "/" ,"\")

		file_path = Mid(full_file_path, InStr(full_file_path,"/") + 1, Len(full_file_path))
		file_path = Replace(file_path, "/" ,"\")

		If source_list.Exists(file_path) Or dir_filter.Test(main_folder) Then

			arr_filter = Split(filter, "\")
			If Not filter_list.Exists(filter) Then
				'WScript.Echo "filter: " & filter
				subfilter = arr_filter(UBound(arr_filter))
				If UBound(arr_filter) > 0 Then
					index = index + 1
				Else
					counter = counter + 1
				End If

				If first_filter <> 0 Then
					If UBound(arr_previous) < UBound(arr_filter) Then
						tab = tab & "	"
						sublevel = sublevel + 1
					ElseIf UBound(arr_previous) > UBound(arr_filter) Then
						tab = Replace(tab, "	", "", 1, 1)
						res = res & tab & "		</Filter>" & vbCrLf
						sublevel = sublevel - 1
					Else
						res = res & tab & "		</Filter>" & vbCrLf
					End If
					filters = filters & vbCrLf
				Else
					first_filter = 1
				End If
				arr_previous = arr_filter

				res = res & tab & _
						"		<Filter" & vbCrLf & tab & _
						"			Name=" & Chr(34) & subfilter & Chr(34) & vbCrLf & tab & _
						"			>" & vbCrLf
				filters = filters & _
				"    <Filter Include="& Chr(34) & filter & Chr(34) & ">" & vbCrLf & _
				"      <UniqueIdentifier>{6dc24dda-7351-4e54-" & String(4 - Len(CStr(counter)), "0") & counter & "-" & String(12 - Len(CStr(index)), "0") & index & "}</UniqueIdentifier>" & vbCrLf & _
				"    </Filter>"

				'WScript.Echo "filters: " & filters
				'WScript.Echo "res: " & res

				filter_list.Add filter, filter
			End If

			If files_list.Item(full_file_path) = "file" Then

				If files_list.Exists(main_folder & "/rev.c") And files_list.Exists(main_folder & "/rev.c.in") Then
					'WScript.Echo "removed: rev.c.in"
					files_list.Remove(main_folder & "/rev.c.in")	' removed "rev.c.in" from list because already exists "rev.c"
				Else
					file_path = Replace(file_path, "rev.c.in" ,"rev.c")	' renamed "rev.c.in" into "rev.c" for the project
				End If
				If first_file <> 0 Then
					vcxproj = vcxproj & vbCrLf
					files = files & vbCrLf
				Else
					first_file = 1
				End If
				res = res & tab & _
				"			<File" & vbCrLf & tab & _
				"				RelativePath=" & Chr(34) & "..\" & main_folder & "\" & file_path & Chr(34) & vbCrLf & tab & _
				"				>" & vbCrLf

				Select Case Split(file_path, ".")(1)
					Case "c"
						cltype = "ClCompile"
					Case "rc"
						cltype = "ResourceCompile"
					Case Else
						cltype = "ClInclude"
				End Select

				If Split(file_path, ".")(1) = "c" Then
					res = res & tab & _
					"				<FileConfiguration" & vbCrLf & tab & _
					"					Name=" & Chr(34) & "Debug|Win32" & Chr(34) & vbCrLf
					If Not source_list.Item(file_path) = "included" Then
						res = res & tab & _
						"					ExcludedFromBuild=" & Chr(34) & "true" & Chr(34) & vbCrLf
					End If
					res = res & tab & _
					"					>" & vbCrLf & tab & _
					"					<Tool" & vbCrLf & tab & _
					"						Name=" & Chr(34) & "VCCLCompilerTool" & Chr(34) & vbCrLf & tab & _
					"						ObjectFile=" & Chr(34) & "$(IntDir)\" & filter & "\" & Chr(34) & vbCrLf & tab & _
					"					/>" & vbCrLf & tab & _
					"				</FileConfiguration>" & vbCrLf & tab & _
					"				<FileConfiguration" & vbCrLf & tab & _
					"					Name=" & Chr(34) & "Release|Win32" & Chr(34) & vbCrLf
					If Not source_list.Item(file_path) = "included" Then
						res = res & tab & _
						"					ExcludedFromBuild=" & Chr(34) & "true" & Chr(34) & vbCrLf
					End If
					res = res & tab & _
					"					>" & vbCrLf & tab & _
					"					<Tool" & vbCrLf & tab & _
					"						Name=" & Chr(34) & "VCCLCompilerTool" & Chr(34) & vbCrLf & tab & _
					"						ObjectFile=" & Chr(34) & "$(IntDir)\" & filter & "\" & Chr(34) & vbCrLf & tab & _
					"					/>" & vbCrLf & tab & _
					"				</FileConfiguration>" & vbCrLf & tab & _
					"				<FileConfiguration" & vbCrLf & tab & _
					"					Name=" & Chr(34) & "Debug|x64" & Chr(34) & vbCrLf
					If Not source_list.Item(file_path) = "included" Then
						res = res & tab & _
						"					ExcludedFromBuild=" & Chr(34) & "true" & Chr(34) & vbCrLf
					End If
					res = res & tab & _
					"					>" & vbCrLf & tab & _
					"					<Tool" & vbCrLf & tab & _
					"						Name=" & Chr(34) & "VCCLCompilerTool" & Chr(34) & vbCrLf & tab & _
					"						ObjectFile=" & Chr(34) & "$(IntDir)\" & filter & "\" & Chr(34) & vbCrLf & tab & _
					"					/>" & vbCrLf & tab & _
					"				</FileConfiguration>" & vbCrLf & tab & _
					"				<FileConfiguration" & vbCrLf & tab & _
					"					Name=" & Chr(34) & "Release|x64" & Chr(34) & vbCrLf
					If Not source_list.Item(file_path) = "included" Then
						res = res & tab & _
						"					ExcludedFromBuild=" & Chr(34) & "true" & Chr(34) & vbCrLf
					End If
					res = res & tab & _
					"					>" & vbCrLf & tab & _
					"					<Tool" & vbCrLf & tab & _
					"						Name=" & Chr(34) & "VCCLCompilerTool" & Chr(34) & vbCrLf & tab & _
					"						ObjectFile=" & Chr(34) & "$(IntDir)\" & filter & "\" & Chr(34) & vbCrLf & tab & _
					"					/>" & vbCrLf & tab & _
					"				</FileConfiguration>" & vbCrLf

					vcxproj = vcxproj & "    <" & cltype & " Include="& Chr(34) & "..\" & main_folder & "\" & file_path & Chr(34) & ">" & vbCrLf
					If Not source_list.Item(file_path) = "included" Then
						vcxproj = vcxproj & "      <ExcludedFromBuild>true</ExcludedFromBuild>" & vbCrLf
					End If
					vcxproj = vcxproj & "      <ObjectFileName>$(IntDir)" & filter & "\</ObjectFileName>" & vbCrLf
					vcxproj = vcxproj & "    </ClCompile>"
				Else
					vcxproj = vcxproj & "    <" & cltype & " Include="& Chr(34) & "..\" & main_folder & "\" & file_path & Chr(34) & " />"
				End If

				res = res & tab & _
				"			</File>" & vbCrLf

				files = files & _
				"    <" & cltype & " Include="& Chr(34) & "..\" & main_folder & "\" & file_path & Chr(34) & ">" & vbCrLf & _
				"      <Filter>" & filter & "</Filter>" & vbCrLf & _
				"    </" & cltype & ">"

			End If

			' Adding filter/filename items that are not defined in source.list file, but they are into src folder.
			If source_list.Item(file_path) = "" And main_folder <> "include" And files_list.Item(full_file_path) = "file" Then
				excluded_list = excluded_list & file_path & vbCrLf
			End if

		Else

			WScript.Echo " !! ERROR !!" _
			& vbCrLf & "" _
			& vbCrLf & "The filter/filename '" & file_path & "' is not defined in source.list file, nor into src or include folders." _
			& vbCrLf & "" _
			& vbCrLf & " !! ERROR !!"
			WScript.Quit(1)

		End If
	Next

	While sublevel > 0
		res = res & tab & "		</Filter>" & vbCrLf
		tab = Replace(tab, "	", "", 1, 1)
		sublevel = sublevel - 1
	Wend
	res = res & tab & "		</Filter>"

	If excluded_list <> "" Then
		WScript.Echo " !! WARNING !!" _
			& vbCrLf & "" _
			& vbCrLf & "The following filters/filenames are not defined in source.list file, but they are into src folder:" _
			& vbCrLf & excluded_list _
			& vbCrLf & " !! WARNING !!"
	End If

	load_main_data = res
End Function

Sub generate(data, dest, data2)
	Dim srcfile, destfile, line
	WScript.Echo "Generating " & FSO.GetFileName(dest) & "..."
	Set srcfile = FSO.OpenTextFile(dest & ".in", 1, 0, 0)
	Set destfile = FSO.CreateTextFile(dest, -1, 0)

	If Not IsNull(data2) Then
		' Everything above the !!FILTERS!! marker
		line = srcfile.ReadLine()
		While line <> "!!FILTERS!!"
			If len(line) > 0 Then destfile.WriteLine(line)
			line = srcfile.ReadLine()
		Wend

		' Our generated content
		destfile.WriteLine(data2)
	End If

	' Everything above the !!FILES!! marker
	line = srcfile.ReadLine()
	While line <> "!!FILES!!"
		If len(line) > 0 Then destfile.WriteLine(line)
		line = srcfile.ReadLine()
	Wend

	' Our generated content
	destfile.WriteLine(data)

	' Everything below the !!FILES!! marker
	While Not srcfile.AtEndOfStream
		line = srcfile.ReadLine()
		If len(line) > 0 Then destfile.WriteLine(line)
	Wend
	srcfile.Close()
	destfile.Close()
End Sub

Dim ROOT_DIR
ROOT_DIR = FSO.GetFolder("..").Path
If Not FSO.FileExists(ROOT_DIR & "/source.list") Then
	ROOT_DIR = FSO.GetFolder(".").Path
End If
If Not FSO.FileExists(ROOT_DIR & "/source.list") Then
	WScript.Echo "Can't find source.list, needed in order to make this run." _
	& vbCrLf & "Please go to either the project dir, or the root dir of a clean SVN checkout."
	WScript.Quit(1)
End If

safety_check ROOT_DIR & "/source.list"

Dim opendune, opendunevcxproj, opendunefilters, opendunefiles
opendune = load_main_data(ROOT_DIR & "/source.list", opendunevcxproj, opendunefilters, opendunefiles)
generate opendune, ROOT_DIR & "/projects/opendune_vs80.vcproj", Null
generate opendune, ROOT_DIR & "/projects/opendune_vs90.vcproj", Null
generate opendunevcxproj, ROOT_DIR & "/projects/opendune_vs100.vcxproj", Null
generate opendunefiles, ROOT_DIR & "/projects/opendune_vs100.vcxproj.filters", opendunefilters
generate opendunevcxproj, ROOT_DIR & "/projects/opendune_vs120.vcxproj", Null
generate opendunefiles, ROOT_DIR & "/projects/opendune_vs120.vcxproj.filters", opendunefilters
generate opendunevcxproj, ROOT_DIR & "/projects/opendune_vs140.vcxproj", Null
generate opendunefiles, ROOT_DIR & "/projects/opendune_vs140.vcxproj.filters", opendunefilters
