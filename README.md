# programacion_makefile
Aprendiendo a crear Makefiles

Normalmente, se compilaría esta colección de código ejecutando el siguiente
comando (como en el ejemplo 1):

gcc -o holamake holamake.c holafunc.c -I.

Se incluye -I para que gcc busque archivos en el directorio actual.

El ejemplo 1-2 hace lo mismo a partir de un directorio (carpetas) más elaborado.
A partir del ejemplo 2, todos los Makefiles usan el mismo código fuente.

La excepción es el ejemplo 6 en el que si incluye una librería estática.
Referencias:
http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
