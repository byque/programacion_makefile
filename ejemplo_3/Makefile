CC=gcc
CFLAGS=-I.
DEPS = holamake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holamake: holamake.o holafunc.o
	gcc -o holamake holamake.o holafunc.o -I.
