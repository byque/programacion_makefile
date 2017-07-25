CC=gcc
IDIR=../include
SDIR=../src
CFLAGS=-I $(IDIR)
DEPS = $(IDIR)/holamake.h
OBJ = $(SDIR)/holamake.o $(SDIR)/holafunc.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holamake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
