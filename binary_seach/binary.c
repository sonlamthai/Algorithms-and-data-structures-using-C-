#include <stdio.h>
#include <stdlib.h>
#include "binary.h"

int binary_search(int *a, int n, int x)
{
  int mid = 0, low = 0, high = 0;

  low = 0;
  high = n - 1;

  while (low <= high)
  {
    mid = (low + high) / 2;

    if (x == a[mid])
    {
      return mid + 1;
    }

    else if (x > a[mid])
    {
      low = mid + 1;
    }

    else
    {
      high = mid - 1;
    }
  }

  return -1;
}
