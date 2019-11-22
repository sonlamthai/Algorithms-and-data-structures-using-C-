#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "convert.h"

int main()
{
  convert_test_1();
  convert_test_2();
  convert_test_3();
  convert_test_4();
  convert_test_5();
  convert_test_6();
  return 0;
}

void convert_test_1()
{
  char number[8] = "01010101";

  char final[2] = "55";

  char *result = malloc(100 * sizeof(char));

  result = convert_base(number, 2, 16);

  for (int i = 0; i < 2; i++)
  {
    if (result[i] != final[i])
    {
      printf("Wrong\n");
    }
    else
    {
      printf("Right\n");
    }
  }
}

void convert_test_2()
{
  char number[3] = "300";

  char final[2] = "48";

  char *result = malloc(100 * sizeof(char));

  result = convert_base(number, 4, 10);


  for (int i = 0; i < 2; i++)
  {
    if (result[i] != final[i])
    {
      printf("Wrong\n");
    }
    else
    {
      printf("Right\n");
    }
  }
}

void convert_test_3()
{
  char number[4] = "1201";

  char final[2] = "2E";

  char *result = malloc(100 * sizeof(char));

  result = convert_base(number, 3, 16);


  for (int i = 0; i < 2; i++)
  {
    if (result[i] != final[i])
    {
      printf("Wrong\n");
    }
    else
    {
      printf("Right\n");
    }
  }
}

void convert_test_4()
{
  char number[3] = "FA";

  char *result = malloc(100 * sizeof(char));
  char final[8] = "11111010";

  result = convert_base(number, 16, 2);

  for (int i = 0; i < 8; i++)
  {
    if (final[i] != result[i])
    {
      printf("Wrong\n");
    }
    else
    {
      printf("Right\n");
    }
  }
}

void convert_test_5()
{
  char number[6] = "236989";

  char final[5] = "8B8F9";

  char *result = malloc(100 * sizeof(char));

  result = convert_base(number, 12, 16);


  for (int i = 0; i < 5; i++)
  {
    if (final[i] != result[i])
    {
      printf("Wrong\n");
    }
    else
    {
      printf("Right\n");
    }
  }
}

void convert_test_6()
{
  char final[6] = "720615";
  char number[7] = "5000000";

  char *result = malloc(100 * sizeof(char));

  result = convert_base(number, 9, 13);


  for (int i = 0; i < 6; i++)
  {
    if (final[i] != result[i])
    {
      printf("Wrong\n");
    }
    else
    {
      printf("Right\n");
    }
  }
}
