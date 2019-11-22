#include <stdio.h>
#include <stdlib.h>
#include "binary.h"

int main(int argc, char const *argv[])
{
  int n = 0, x = 0, result = 0;
  int *a = NULL;

  printf("Enter n:\n");
  scanf("%d", &n);

  a = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    printf("Enter numbers :\n");
    scanf("%d", &a[i]);
  }

  printf("Enter X:\n");
  scanf("%d", &x);

  result = binary_search(a, n, x);

  printf("X found at location %d\n", result);

  printf("\n");

  return 0;
}
