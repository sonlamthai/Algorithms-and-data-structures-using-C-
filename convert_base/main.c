#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "convert.h"


int main()
{
  int n = 0, m = 0;
  char number[100];

  char *result = malloc(100 * sizeof(char));

  printf("Please enter number : ");
  if (fgets (number, 100, stdin) != NULL)
  {
    number[strlen(number) - 1] = '\0';
  }

  printf("Please enter base n : ");
  scanf("%d", &n);

  printf("Please enter base m : ");
  scanf("%d", &m);

  result = convert_base(number, n, m);

  printf("\nDisplay number in base %d is : %s\n", m, result);

  return 0;
}
