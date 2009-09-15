# Unix
CFLAGS=-m32 -g -Wall -Wextra
LIB_EXTENSION=.so
LIBS=-lncursesw -lSDL

# Windows
ifdef WIN32
CFLAGS=-g -Wall
CC=i686-mingw32-gcc
LIB_EXTENSION=.dll
LIBS=
endif

opendune: src/main.c
	$(CC) $(CFLAGS) -o $@ decompiled/*.c src/*.c ./libemu$(LIB_EXTENSION) -I include/ $(LIBS)

clean:
	rm -f opendune

