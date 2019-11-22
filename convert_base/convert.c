#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "convert.h"

char *convert_base(char number[], int n, int m)
{

  char base_digits[16] = "0123456789ABCDEF";
  int i = 0, value = 0;

  char *temp = malloc(100 * sizeof(char));
  char *result = malloc(100 * sizeof(char));

  int len = strlen(number);

  while (i < len)
  {
    value = value * n + (strchr(base_digits, number[i]) - base_digits);
    i++;
  }
  // printf("===> %d\n", value);

  i = 0;

  while (value > 0)
  {
    temp[i] = base_digits[value % m];
    value /= m;
    i++;
  }
  temp[i] = '\0';

  // printf(",,,%s\n", temp);

  int k = 0;

  for (k = 0; k < strlen(temp); k++)
  {
    result[k] = temp[i - 1];
    i--;
  }
  result[k] = '\0';

  return result;
}
