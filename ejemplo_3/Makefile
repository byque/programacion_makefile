CC=gcc
CFLAGS=-I.
DEPS = holamake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holammake: holamake.o holafunc.o
	gcc -o holamake holamake.o holafunc.o -I.
