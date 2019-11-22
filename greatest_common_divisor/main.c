#include <stdio.h>
#include <stdlib.h>
#include "greatest_common_divisor.h"

int main(int argc, char const *argv[])
{
  int a = 0, b = 0, gcd = 0;

  printf("Enter a\n");
  scanf("%d", &a);
  printf("Enter b\n");
  scanf("%d", &b);

  gcd = greatest_common_divisor(a, b);

  printf("greatest_common_divisor of %d and %d is %d\t", a, b, gcd);

  return 0;
}
