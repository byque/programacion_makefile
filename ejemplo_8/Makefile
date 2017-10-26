################################################################################
# Plantilla de Makefile con funciones avanzadas                                #
################################################################################

# Éste es el nombre de los binarios que serán generados
TARGET  = holabinario

# Aquí añadimos todos los archivos *.c que se quieren compilar
CSRCS   = ../src/holafuncion.c ../src/holamain.c

# Aquí añadimos las rutas a los directorios include
IDIR    = ../include ../include2 include3

# Configuración del compilador
CC      = gcc
CFLAGS  = -g -std=gnu99 -Wall
LDFLAGS = -g -Wall

################################################################################
# No cambiar nada después de esta línea                                        #
################################################################################

# Un poco de magia para directorios y archivos
BUILDDIR = build
OBJDIR   = $(BUILDDIR)/obj

# Generar el nombre de los archivos objeto
OBJS     = $(addprefix $(OBJDIR)/,$(addsuffix .o,$(basename $(CSRCS:%.c=%.o))))

# Añadir las rutas
CFLAGS   += $(IDIR:%=-I %)

# Aquí se definen los archivos generados por defecto cuando el usuario llama
# solamente 'make'
all: build size
	@echo $(CFLAGS)
	@echo $(OBJS)

# Crear todos los archivos
build: builddirs $(BUILDDIR)/$(TARGET)

# Crear los directorios requeridos (si no existen previamente)
builddirs:
	mkdir -p $(BUILDDIR)
	mkdir -p $(OBJDIR)

# Enlazar todo junto
$(BUILDDIR)/$(TARGET): $(OBJS)
	@echo Linking $@
	$(CC) $(LDFLAGS) -o $(BUILDDIR)/$(TARGET) $(OBJS)

# Compilar los archivos en c
$(OBJDIR)/%.o: %.c
	mkdir -p $(dir $@)
	@echo Compiling $^
	$(CC) $(CFLAGS) -c -o $@ $^

# Imprimir la información del tamaño
size: $(BUILDDIR)/$(TARGET)
	@echo
	@echo
	$^

# Limpiar código
clean:
	rm -rf $(BUILDDIR) $(OBJS) $(TARGET) $(TARGET).* *.a *.o *~
	@echo "Limpieza terminada!"

# Clean debe ser phony tal que make nunca salga de ejecución como un archivo
.PHONY: clean
