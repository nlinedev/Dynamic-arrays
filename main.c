#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int numero = 5;
  int *puntero = &numero;

  printf("\nDireccion de memoria de la variable numero: %p\n", &numero);
  printf("Direccion de memoria a la que apunta el puntero: %p\n\n", puntero);
  
  printf("Valor original de la variable numero: %i\n", numero);
  printf("Valor al que apunta el puntero: %i\n", *puntero);
  printf("\n\n");

  *puntero = 15;

  printf("Valor actualizado al que apunta el puntero: %i\n", *puntero);
  printf("Valor de la variable numero: %i", numero);

  return 0;
}