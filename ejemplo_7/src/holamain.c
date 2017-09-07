#include <holaheader.h>
#include <stdio.h>
#include <math.h>
#include <ej_lib.h>

int main() {
  // Llamar una función en otro archivo
  miImpresionHolaMake();

  // Llamar a una función de una librería estándar
  printf("La raíz cuadrada de 9 es %f\n", sqrt(9.0));

  // Llamar a una función de una librería local
  double v1, v2, p;

  v1 = 5.2;
  v2 = 7.9;

  p = promedio(v1, v2);

  printf("El promedio de %3.2f y %3.2f es %3.2f\n", v1, v2, p);

  return(0);
}
