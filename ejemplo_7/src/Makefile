CC = gcc

# Directorios
IDIR = ../include
ODIR = obj
LDIR = ../lib

CFLAGS = -static -I$(IDIR)

LIBS = -L$(LDIR) -lm -lej

_DEPS = holaheader.h ej_lib.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = holamain.o holafuncion.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holabinario: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
