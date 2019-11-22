#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void bubble_sort(int *a, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        swap(&a[j], &a[j + 1]);
      }
    }
  }
}
