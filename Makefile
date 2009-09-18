# Settings via env variables
#  CC          - Your C compiler
#  CFLAGS      - Your CFLAGS (we add a few we find essential)
#  LIBS        - Which libs to include (we add a few we find essential)
#
#  Settings via parameters
#   WIN32:=1   - To compile a .exe
#   STATIC:=1  - If you want to compile static (default yes for WIN32)

CFLAGS := $(CFLAGS)
ifdef WIN32
ifndef STATIC
STATIC := 1
endif
EXTENSION := .exe
LIB_EXTENSION := .dll
LIBS := $(LIBS) SDL.dll
else
EXTENSION :=
LIB_EXTENSION := .so
LIBS := $(LIBS) -lncursesw -lSDL
endif

ifdef STATIC
LIBS := $(LIBS) libemu.a
else
LIBS := $(LIBS) ./libemu$(LIB_EXTENSION)
endif

CFLAGS := $(CFLAGS) -g -Wall -Wextra
# We need -O1 and optimize-sibling-calls to avoid infinite loops we are
#  currently having. When all those cases are resolved, this can be removed.
CFLAGS := $(CFLAGS) -O1 -foptimize-sibling-calls

DECOMPILED := $(shell ls decompiled/*.c 2>/dev/null)
DECOMPILED := $(DECOMPILED:%.c=objs/%.o)
SOURCE := $(shell ls src/*.c src/*/*.c 2>/dev/null)
SOURCE := $(SOURCE:%.c=objs/%.o)
RES := $(shell mkdir -p objs/decompiled objs/src)

ifdef VERBOSE
	Q =
else
	Q = @
endif

all: opendune$(EXTENSION)

objs/%.o: %.c
	$(shell mkdir -p `dirname $@`)
	@echo "[Compiling] $^"
	$(Q)$(CC) $(CFLAGS) -c $^ -o $@ -I include/

opendune$(EXTENSION): $(DECOMPILED) $(SOURCE)
	@echo "[Linking] $@"
	$(Q)$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	@echo "[Cleaning] opendune"
	$(Q)rm -f opendune$(EXTENSION) $(DECOMPILED) $(SOURCE)

