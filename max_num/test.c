#include <stdio.h>
#include <stdlib.h>
#include "max_num.h"

int main(int argc, char const *argv[])
{
  max_num_test();
  return 0;
}

int max_num_test()
{
  int test_data[6] = {-6, -31, 0, 10, 22, 5};
  int result = 22;

  if (max_num(test_data, 6) != result)
  {
    for (int i = 0; i < 6; i++)
    {
      printf("Wrong %d\n", test_data[i]);
    }
    printf("=> %d\n", result);
  }
}
