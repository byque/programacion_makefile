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

BINDIR   = bin
BUILDDIR = build
OBJDIR   = $(BUILDDIR)/obj

#------------------------------------------------------------------------------#
# Generar el nombre de los archivos objeto                                     #
#------------------------------------------------------------------------------#
# Establece el archivo objeto como fuente para la compilación cambiando la
# extensión de .c a .o de los archivos fuente
# CSRCS:%.c=%.o

# Crea una lista de archivos sin extensión de los archivos fuente
# basename $(CSRCS:%.c=%.o)

# Crea una lista de archivos con extensión .o de los archivos fuente
# addsuffix .o,$(basename $(CSRCS:%.c=%.o))

# Establece la ruta y el nombre de cada archivo objeto para la compilación
OBJS     = $(addprefix $(OBJDIR)/,$(addsuffix .o,$(basename $(CSRCS:%.c=%.o))))

# Añadir la ruta de los dierectorios include
CFLAGS   += $(IDIR:%=-I %)

# Aquí se definen los archivos generados por defecto cuando el usuario llama
# solamente 'make'
all: build size

# Crear todos los archivos y el binario
build: builddirs $(BINDIR)/$(TARGET)

# Crear los directorios requeridos (si no existen previamente)
builddirs:
	@echo
	@echo "Creando directorios..."
	mkdir -p $(BINDIR)
	mkdir -p $(BUILDDIR)
	mkdir -p $(OBJDIR)

# Enlazar todo junto
$(BINDIR)/$(TARGET): $(OBJS)
	@echo
	@echo Enlazando $@
	$(CC) $(LDFLAGS) -o $(BINDIR)/$(TARGET) $(OBJS)

# Compilar los archivos en c
$(OBJDIR)/%.o: %.c
	mkdir -p $(dir $@)
	@echo
	@echo Compilando $^
	$(CC) $(CFLAGS) -c -o $@ $^

# Imprimir la información del tamaño
size: $(BINDIR)/$(TARGET)
	@echo
	size $^

# Limpiar código
clean:
	@echo
	@echo "Limpiando..."
	rm -rf $(BINDIR) $(BUILDDIR) $(OBJS) $(TARGET) $(TARGET).* *.a *.o *~
	@echo
	@echo "Limpieza terminada!"

# Clean debe ser phony tal que make nunca salga de ejecución como un archivo
.PHONY: clean
