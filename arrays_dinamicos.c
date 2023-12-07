#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int *array;

  // array = malloc(10 * sizeof(int));
  
  array = calloc(10, sizeof(int));

  if(array == NULL)
  {
    printf("Ha ocurrido un error al momento de reservar el espacio de memoria.");
    exit(1);
  }
  
  for (int i = 0; i < 10; i++)
    array[i] = i;

  for (int i = 0; i < 10; i++)
    printf("%i ", *(array + i)); // = array[i]
  
  printf("\n\n\n");

  array = realloc(array, 15 * sizeof(int));

  for (int i = 0; i < 15; i++)
    printf("%i ", *(array + i)); // = array[i]

  free(array);

  return 0;
}
