# Unix
CFLAGS=-m32
LIB_EXTENSION=.so
EXTENSION=
LIBS=-lncursesw -lSDL

# Windows
ifdef WIN32
CFLAGS=
CC=i686-mingw32-gcc
LIB_EXTENSION=.dll
EXTENSION=.exe
LIBS=
endif

CFLAGS += -g -Wall -Wextra
# We need -O1 and optimize-sibling-calls to avoid infinite loops we are
#  currently having. When all those cases are resolved, this can be removed.
CFLAGS += -O1 -foptimize-sibling-calls

DECOMPILED := $(shell ls decompiled/*.c)
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
	@echo "[Compiling] $^"
	$(Q)$(CC) $(CFLAGS) -c $^ -o $@ -I include/

opendune$(EXTENSION): $(DECOMPILED) $(SOURCE)
	@echo "[Linking] $@"
	$(Q)$(CC) $(CFLAGS) -o $@ $^ ./libemu$(LIB_EXTENSION) $(LIBS)

clean:
	@echo "[Cleaning] opendune"
	$(Q)rm -f opendune$(EXTENSION) $(DECOMPILED) $(SOURCE)

