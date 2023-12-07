#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int **array = calloc(5, sizeof(int*));
  // int *matriz = malloc(5 * 5 * sizeof(int));
  int r = 5, c = 5, counter = 1;

  if(array == NULL)
  {
    printf("Ha ocurrido un error al momento de reservar el espacio de memoria.");
    exit(1);
  }
  
  for (int i = 0; i < r; i++)
    array[i] = calloc(c, sizeof(int));

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      array[i][j] = counter;
      // matriz[i * c + j] = counter;
      counter++;
    }
  }
  
  printf("\n\n\n");

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
      printf("%i ", array[i][j]);
      // printf("%i ", matriz[i * c + j]);
    printf("\n");
  }

  printf("\n\n\n");

  r = 10;
  c = 10;
  counter = 1;


  array = realloc(array, r * sizeof(int*));
  // matriz = realloc(matriz, (r * c) * sizeof(int));

  if(array == NULL)
  {
    printf("Ha ocurrido un error al momento de reservar el espacio de memoria.");
    exit(1);
  }
  else
  {
    for (int i = 0; i < c; i++)
    {
      array[i] = realloc(array[i], c * sizeof(int));
      if(array[i] == NULL)
      {
        printf("Ha ocurrido un error al momento de reservar el espacio de memoria.");
        exit(1);
      }
    }
  }


  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      array[i][j] = counter;
      counter++;
    }
  }

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
      printf("%i ", array[i][j]);
    printf("\n");
  }



  free(array);

  return 0;
}
