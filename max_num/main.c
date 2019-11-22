#include <stdio.h>
#include <stdlib.h>
#include "max_num.h"

int main(int argc, char const *argv[])
{
  int n = 0, result = 0;
  int *a = NULL;

  printf("Enter n is size of list :\n");
  scanf("%d", &n);

  a = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    printf("Enter numbers:\n");
    scanf("%d", &a[i]);
  }

  result = max_num(a, n);

  printf("Max number is %d\n", result);

  printf("\n");

  free(a);
  return 0;
}
