# Unix
CFLAGS=-m32 -g -Wall -Wextra
LIB_EXTENSION=.so
EXTENSION=
LIBS=-lncursesw -lSDL

# Windows
ifdef WIN32
CFLAGS=-g -Wall -Wextra
CC=i686-mingw32-gcc
LIB_EXTENSION=.dll
EXTENSION=.exe
LIBS=
endif

DECOMPILED := $(shell ls decompiled/*.c)
DECOMPILED := $(DECOMPILED:%.c=objs/%.o)
SOURCE := $(shell ls src/*.c src/*/*.c 2>/dev/null)
SOURCE := $(SOURCE:%.c=objs/%.o)
RES := $(shell mkdir -p objs/decompiled objs/src)

all: opendune$(EXTENSION)

objs/%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I include/

opendune$(EXTENSION): $(DECOMPILED) $(SOURCE)
	$(CC) $(CFLAGS) -o $@ $^ ./libemu$(LIB_EXTENSION) $(LIBS)

clean:
	rm -f opendune$(EXTENSION) $(DECOMPILED) $(SOURCE)

