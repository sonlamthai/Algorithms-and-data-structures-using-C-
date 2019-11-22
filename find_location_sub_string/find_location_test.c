#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "location.h"

int main()
{
  find_location_test_1();
  find_location_test_2();
  find_location_test_3();
  find_location_test_4();
  find_location_test_5();
  find_location_test_6();
  find_location_test_7();

  return 0;
}

void find_location_test_1()
{
  char *str = "hello, how are you, I'm ok, and you";
  char *sub_str = "llo";
  int *array = NULL;

  int *result_array = malloc(1 * sizeof(int));

  result_array[0] = 2;

  array = find_location(str, sub_str, array);

  for (int i = 0; i < 1; i++)
  {
    if (array[i] != result_array[i])
    {
      printf("Wrong : %d ---> Right : %d\n", array[i], result_array[i]);
    }
    else
    {
      printf("Right\n");
    }
  }
}

void find_location_test_2()
{
  char *str = "hello, how are you, I'm ok, and you";
  char *sub_str = "you";
  int *array = NULL;

  int *result_array = malloc(2 * sizeof(int));

  result_array[0] = 15;
  result_array[1] = 32;

  array = find_location(str, sub_str, array);

  for (int i = 0; i < 2; i++)
  {
    if (array[i] != result_array[i])
    {
      printf("Wrong : %d ---> Right : %d\n", array[i], result_array[i]);
    }
    else
    {
      printf("Right\n");
    }
  }
}

void find_location_test_3()
{
  char *str = "125689754125698426954561235896789541274065";
  char *sub_str = "54";
  int *array = NULL;

  int *result_array = malloc(3 * sizeof(int));

  result_array[0] = 7;
  result_array[1] = 19;
  result_array[2] = 33;

  array = find_location(str, sub_str, array);

  for (int i = 0; i < 3; i++)
  {
    if (array[i] != result_array[i])
    {
      printf("Wrong : %d ---> Right : %d\n", array[i], result_array[i]);
    }
    else
    {
      printf("Right\n");
    }
  }
}

void find_location_test_4()
{
  char *str = "';....<!'@@#@$%%^&*(=-_+)))(@#^&*^&*^&*^&^$%%#$$#345";
  char *sub_str = "';....<!'@@#@$%%^&*(=-_+)))(@#^&*^&*^&*^&^$%%#$$#345";
  int *array = NULL;

  int *result_array = malloc(1 * sizeof(int));
  result_array[0] = 0;

  array = find_location(str, sub_str, array);

  for (int i = 0; i < 1; i++)
  {
    if (array[i] != result_array[i])
    {
      printf("Wrong : %d ---> Right : %d\n", array[i], result_array[i]);
    }
    else
    {
      printf("Right\n");
    }
  }
}

void find_location_test_5()
{
  char *str = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
  char *sub_str = "x";
  int *array = NULL;

  int *result_array = malloc(32 * sizeof(int));

  int k = 0;
  for (int i = 0; i < 31; i++)
  {
    result_array[i] = k;
    k++;
  }

  array = find_location(str, sub_str, array);

  for (int i = 0; i < 31; i++)
  {
    if (array[i] != result_array[i])
    {
      printf("Wrong : %d ---> Right : %d\n", array[i], result_array[i]);
    }
    else
    {
      printf("Right\n");
    }
  }
}

void find_location_test_6()
{
  char *str = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
  char *sub_str = "xxxx";
  int *array = NULL;

  int *result_array = malloc(28 * sizeof(int));

  int k = 0;
  for (int i = 0; i < 28; i++)
  {
    result_array[i] = k;
    k++;
  }

  array = find_location(str, sub_str, array);

  for (int i = 0; i < 28; i++)
  {
    if (array[i] != result_array[i])
    {
      printf("Wrong : %d ---> Right : %d\n", array[i], result_array[i]);
    }
    else
    {
      printf("Right\n");
    }
  }
}

void find_location_test_7()
{
  char *str = "Another candidate in the Mekong Delta city of Can Tho came to the exam room in a wheelchair after meeting with a horrific traffic accident two weeks earlier. Nguyen Thien Nhan, 21, spoke to VnExpress about his yearning to join the Police University.";
  char *sub_str = "i";
  int *array = NULL;

  int location[] = {12,18,39,76,89,102,107,117,119,127,133,153,167,207,215,224,234,240,245};
  int *result_array = malloc(19 * sizeof(int));

  for (int i = 0; i < 19; i++)
  {
    result_array[i] = location[i];
  }

  array = find_location(str, sub_str, array);

  for (int i = 0; i < 19; i++)
  {
    if (array[i] != result_array[i])
    {
      printf("Wrong : %d ---> Right : %d\n", array[i], result_array[i]);
    }
    else
    {
      printf("Right\n");
    }
  }
}
