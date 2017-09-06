# Makefile para crear una librería estática a partir del código fuente

CC = gcc

# Directorios
ODIR = ../src/obj
SDIR = ../src

_OBJ = ej_lib.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

_SRC = ej_lib.c
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

LIB = libej.a

$(OBJ): $(SRC)
	$(CC) -c -o $@ $<
	ar rcs $(LIB) $@

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
