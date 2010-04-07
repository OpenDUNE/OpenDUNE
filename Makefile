# Settings via env variables
#  CC          - Your C compiler
#  CFLAGS      - Your CFLAGS (we add a few we find essential)
#  LDFLAGS     - Your LDFLAGS
#  LIBS        - Which libs to include (we add a few we find essential)
#
#  Settings via parameters
#   OSX:=1     - To compile on/for OSX
#   WIN32:=1   - To compile on/for Windows
#   STATIC:=1  - If you want to compile static (default yes for WIN32)

CFLAGS := $(CFLAGS)
ifdef WIN32
CFLAGS := $(CFLAGS) -DWIN32
ifndef STATIC
STATIC := 1
endif
EXTENSION := .exe
LIB_EXTENSION := .dll
else
EXTENSION :=
ifdef OSX
LIB_EXTENSION := .dylib
else
LIB_EXTENSION := .so
endif
endif

ifdef STATIC
LIBS := $(LIBS) libemu.a
LIBEMU := libemu.a
else
LIBS := $(LIBS) ./libemu$(LIB_EXTENSION)
LIBEMU := libemu$(LIB_EXTENSION)
endif

ifdef OSX
ifdef STATIC
LDFLAGS := $(LDFLAGS) `sdl-config --static-libs`
else
LDFLAGS := $(LDFLAGS) `sdl-config --libs`
endif
else
LIBS := $(LIBS) -lSDL
ifdef WIN32
LIBS := $(LIBS) -lwinmm
endif
endif

CFLAGS := $(CFLAGS) -g -Wall -Wextra -Wno-unused-label -Wno-multichar
CFLAGS := $(CFLAGS) -ansi -pedantic
# We need -O1 and optimize-sibling-calls to avoid infinite loops we are
#  currently having. When all those cases are resolved, this can be removed.
CFLAGS := $(CFLAGS) -O1 -foptimize-sibling-calls
LDFLAGS := $(LDFLAGS) -g

HEADER := $(shell ls decompiled/*.h src/*.h src/*/*.h include/*.h 2>/dev/null)
DECOMPILED := $(shell ls decompiled/*.c 2>/dev/null)
DECOMPILED_OBJS := $(DECOMPILED:%.c=objs/%.o)
SOURCE := $(shell ls src/*.c src/*/*.c 2>/dev/null)
SOURCE_OBJS := $(SOURCE:%.c=objs/%.o)
RES := $(shell mkdir -p objs/decompiled objs/src)

ifdef VERBOSE
	Q =
else
	Q = @
endif

all: opendune$(EXTENSION)

objs/depend: tools/depend/depend.cpp
	@echo "[Compiling / Linking] depend"
	$(Q)$(CXX) $(LDFLAGS) -o $@ $^

ifeq ($(filter depend clean, $(MAKECMDGOALS)),)
-include Makefile.dep
endif

ifeq ($(filter depend, $(MAKECMDGOALS)),)
Makefile.dep: objs/depend $(SOURCE) $(DECOMPILED) $(HEADER)
else
Makefile.dep: objs/depend FORCE
endif
	@echo "[Dependency Check] All files"
	$(Q)objs/depend -fMakefile.dep.tmp -o.o -Y -v -- $(CFLAGS) -I include -- $(DECOMPILED) $(SOURCE) 2>/dev/null
	$(Q)cat Makefile.dep.tmp | sed 's@^src@objs/src@g;s@^decompiled@objs/decompiled@g' > Makefile.dep
	$(Q) rm -f Makefile.dep.tmp Makefile.dep.tmp.bak

depend: Makefile.dep

objs/%.o: %.c
	$(shell mkdir -p `dirname $@`)
	@echo "[Compiling] $<"
	$(Q)$(CC) $(CFLAGS) -c $< -o $@ -I include/

opendune$(EXTENSION): $(DECOMPILED_OBJS) $(SOURCE_OBJS) $(LIBEMU)
	@echo "[Linking] $@"
	$(Q)$(CC) $(LDFLAGS) -o $@ $(DECOMPILED_OBJS) $(SOURCE_OBJS) $(LIBS)

clean:
	@echo "[Cleaning] opendune"
	$(Q)rm -f Makefile.dep opendune$(EXTENSION) $(DECOMPILED_OBJS) $(SOURCE_OBJS)

FORCE:

