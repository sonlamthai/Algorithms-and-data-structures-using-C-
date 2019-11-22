#include <stdio.h>
#include <stdlib.h>
#include "greatest_common_divisor.h"

int greatest_common_divisor(int a, int b)
{
  int temp = 0;

  while (b != 0)
  {
    temp = b;
    b = a % b;
    a = temp;
  }

  return a;
}
