
[OpenDune.org]: https://www.opendune.org/
[Github]: https://github.com/OpenDUNE/OpenDUNE
[Report Bugs]: https://github.com/OpenDUNE/OpenDUNE/issues
[Wiki]: https://github.com/OpenDUNE/OpenDUNE/wiki
[Bugs]: docs/Bugs.md
[Enhancements]: docs/Enhancements.txt


[Munt Emulator]: https://github.com/munt/munt


# OpenDUNE

This is an open source recreation of **Westwood Studios** <br>
game `DuneII`, released by **Virgin Entertainment**.

*This implementation tries to stay true to original while using* <br>
*modern techniques to run natively on a wide variety of systems.*

---

**⸢ [OpenDune.org] ⸥ ⸢ [Github] ⸥ ⸢ [Report Bugs] ⸥ ⸢ [Wiki] ⸥ ⸢ [Bugs] ⸥ ⸢ [Enhancements] ⸥**

---

**IRC:** `irc://irc.oftc.net/OpenDUNE`

---

## Supported Platforms

| Platform | Requirements |
|:--------:|:------------:|
| *Atari TOS* | `68030+ CPU` \| `TT` \| `Falcon` \| `Accelerated ST / STE` |
| *Mac OS X* | `PowerPC` \| `i686 / x86_64` \| `10.4+` |
| *Windows* | `i686 / x86_64` |
| *Linux* | **\*** |
| *FreeBSD* | **\*** |
| *OS/2* | **\*** |
| *Haiku* | **\*** |

***OpenDUNE*** *is writtin in `ASNI C(C89)`, only requires `SDL` / `SDL2`* <br>
*and thus should run on all platforms supporting either of those.*

---

## Requirements

#### Windows

`No requirements`.

#### Mac OS X

`No requirements`, the used libraries are <br>
packaged into the statically compiled binary.

#### Linux / FreeBSD

You need to install `LibSDL`.

It should be available in all package managers <br>
and will likely already be installed on your system.

You also require a working `ALSA` driver.

**OpenDUNE** supports `OSS` & `PulseAudio` as well.

### Munt MT32

To have `MT32` Music, one can <br>
build with the **[Munt Emulator]**.

For this, please follow the steps below:

#### Windows

Users should install `mt32emu_win32drv` and select <br>
the `mt32midi` option in the `opendune.ini` config to <br>
automatically have the right **MIDI** device be selected.

#### Linux / FreeBSD

Users should install `munt` on their system and rebuild.

---

## Installation / Running

1. Extract `OpenDUNE`

2. Copy the original `Dune2 1.07` data <br>
   files as well as `dune2.exe` to `data/`

3. Start `opendune`

*All 3 data files ( `eu` | `hs` | `us` ) will work,* <br>
*however **French** is contained to `eu` / `hs`,* <br>
*while **German** is limited to `eu`.*

## Configuration

In the `opendune.ini` config file you can specify additional settings.

This file can be found in the `data/` directory, the <br>
current directory or in a system specific location.

| System | Location |
|:------:|:---------|
| Windows | `%APPDATA%\OpenDUNE` |
| Mac OS X | `~/Library/Application Support/OpenDUNE` |
| Linux / FreeBSD | `~/.config/opendune` |
| Haiku | `B_USER_SETTINGS_DIRECTORY/opendune` |

*Options must be specified after a `[opendune]` section header*

### Options

#### General

| Option | Value |
|:------:|:------|
| `language` | `english` \| `french` \| `german` |
| `datadir` | **Dune** data file directory |
| `savedir` | **Dune** save data directory |
| `scalefactor` | `1` ( *No Upscaling* ) <br> `2` ( *Default* ) <br> `3` \| `4` |
| `scalefilter` | `nearest` ( *Default* )  <br> `scale2x` \| `hqx`
| `framerate` | FPS Limit ( *Default: `60`* ) |
| `fullscreen` | `0` ( *Default* ) <br> `1` Fullscreen |
| `mt32midi` | `0` ( *Default* ) <br> `1` MT32 is initialized `.MXI` used |
| `mt32rompath` | `CM32L_CONTROL.ROM/CM32L_PCM.ROM` <br> directory for the **Munt** emulator |

#### Debug

| Option | Value |
|:------:|:------|
| `dune2_enhanced` | `0` Original **DuneII** including **Bugs** <br> `1` **OpenDUNE** enhancements |
| `debug_game` | `0` ( *Default* ) <br> `1` Player controlled AI |
| `debug_scenario` | `0` ( *Default* ) <br> `1` Player controlled scenario: <br>   - *Game is paused* <br>   - *Clickable tiles* <br>   - *No fog* |
| `debug_skip_dialogs` | `0` ( *Default* ) <br> `1` Skips all intros, starts at house select |
| `debug_log_game` | `0` ( *Default* ) Off <br> `1` Records game to `dune.log` <br> `2` Replays recording from `dune.log` |
| `starport_unit_cap` | `0` ( *Default* ) <br> `1` Limited units to `starport` |

---

## Controls

Same controls as the original `DUNE II`, keys <br>
usually reflect action names such as `B` for `Build`.

|  Key | Action |
|:----:|:------:|
| `F1` | Mentat Screen |
| `F2` | Options |
| `F3` | Structure Specific Menu <br> ( `Construction Yard`, `Factory`, `..` )

**New** controls added in `OpenDUNE`:

|  Key | Action |
|:----:|:------:|
| `F8` | Toggle FPS |
| `F11` <br> `Ctrl-Enter` | Toggle Fullscreen |

---

## Credits
*List are in alphabetical order*

<table>
    <tr><th colspan = '3' >OpenDUNE Team</th></tr>
    <tr>
        <td align = 'center' ><code>Alberth</code></td>
        <td align = 'center' ><b>Albert Hofkamp</b></td>
        <td align = 'center' ><code>Refactoring Dude</code></td>
    </tr>
    <tr>
        <td align = 'center' ><code>glx</code></td>
        <td align = 'center' ><a href = 'https://github.com/glx22' ><b>Loic Guilloux</b></a></td>
        <td align = 'center' ><code>Windows Guru</code></td>
    </tr>
    <tr>
        <td align = 'center' ><code>TrueBrain</code></td>
        <td align = 'center' ><a href = 'https://github.com/TrueBrain' ><b>Patric Stout</b></a></td>
        <td align = 'center' ><code>Lead Developer</code></td>
    </tr>
    <tr>
        <td align = 'center' ><code>Xaroth</code></td>
        <td align = 'center' ><a href = 'https://github.com/Xaroth' ><b>Steven Noorbergen</b></a></td>
        <td align = 'center' ><code>Lead Manager</code></td>
    </tr>
    <tr>
        <td align = 'center' colspan = '2' ><a href = 'https://github.com/miniupnp' ><b>Thomas Bernard</b></a></td>
        <td align = 'center' ><code>Developer</code></td>
    </tr>
</table>

<table>
    <tr><th colspan = '3' >Thanks To</th></tr>
    <tr>
        <td align = 'center' ><code>nsz</code></td>
        <td align = 'center' ><b>Szabolcs Nagy</b></td>
        <td align = 'center' ><code>ANSI C Guru</code></td>
    </tr>
    <tr>
        <td align = 'center' ><code>planetmaker</code></td>
        <td align = 'center' ><a href = 'https://github.com/planetmaker' ><b>Ingo von Borstel</b></a></td>
        <td align = 'center' ><code>Many Bug Reports</code></td>
    </tr>
    <tr>
        <td align = 'center' colspan = '2' ><code>tneo</code></td>
        <td align = 'center' ><code>Many Bug Reports</code></td>
    </tr>
    <tr>
        <td align = 'center' ><code>wangds</code></td>
        <td align = 'center' ><a href = 'https://github.com/wangds' ><b>David Wang</b></a></td>
        <td align = 'center' ><code>Many Patches & Bug Reports</code></td>
    </tr>
    <tr>
        <td align = 'center' colspan = '2' ><b>Bug Reporters</b></td>
        <td align = 'center' ><code>Thank You All</code></td>
    </tr>
    <tr>
        <td align = 'center' colspan = '2' ><b>Westwood</b></td>
        <td align = 'center' ><code>Creating An Amazing Game</code></td>
    </tr>
</table>
