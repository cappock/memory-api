#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main() {
  int *data;
  data = malloc(TAM*sizeof(int));

  *(data + 99) = 0; 
     
  return 0;
}