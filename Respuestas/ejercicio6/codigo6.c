#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main() {
  int *data;
  data = malloc(TAM*sizeof(int));

  *(data + 5) = 10; 
  free(data);
  printf("%d\n",*(data+10));
     
  return 0;
}