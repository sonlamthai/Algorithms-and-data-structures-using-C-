#include <stdio.h>
#include <stdlib.h>
#include "bai4.h"

int main(int argc, char const *argv[])
{
  test_gdb();

  return 0;
}

int test_gdb()
{
  int test_data_a[3] = {10, 15, 20};
  int test_data_b[3] = {5, 3, 7};
  int result[3] = {5, 3, 1};

  for (int i = 0; i < 3; i++)
  {
    if (greatest_common_divisor(test_data_a[i], test_data_b[i]) != result[i])
    {
      printf("Wrong %d, %d ==> %d\n", test_data_a[i], test_data_b[i], result[i]);
    }
  }
}
