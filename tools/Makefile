CFLAGS=-Wall -O -Wextra

all:	extractpak

extractpak:	extractpak.o

extractpak.o:	../src/tools/extractpak.c
	$(CC) $(CFLAGS) -c -o $@ $^
