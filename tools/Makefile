CFLAGS=-Wall -O -Wextra

all:	extractpak amigaMXextract

extractpak:	extractpak.o

amigaMXextract:	amigaMXextract.o

%.o:	../src/tools/%.c
	$(CC) $(CFLAGS) -c -o $@ $^

