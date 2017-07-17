CC=gcc
CFLAGS=-I.
DEPS = holamake.h
OBJ = holamake.o holafunc.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holamake: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
