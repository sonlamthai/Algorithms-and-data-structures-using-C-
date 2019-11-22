#include <stdio.h>
#include <stdlib.h>
#include "max_num.h"

int max_num(int *a, int n)
{
  int max = 0;

  max = a[0];

  for (int i = 1; i < n; i++)
  {
    if (max < a[i])
    {
      max = a[i];
    }
  }

  return max;
}
