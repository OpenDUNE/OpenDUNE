CFLAGS=-Wall -O -Wextra

all:	extractpak buildpak amigaMXextract

extractpak:	extractpak.o

buildpak:	buildpak.o

amigaMXextract:	amigaMXextract.o

%.o:	../src/tools/%.c
	$(CC) $(CFLAGS) -c -o $@ $^

