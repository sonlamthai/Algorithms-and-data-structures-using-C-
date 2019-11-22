#include "checking_bracket.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  initializt_test();
  empty_test();
  push_test();
  peek_test();
  pop_test();
  checking_bracket_test();

  return 0;
}

void initializt_test()
{
  node test;
  initialize(&test);

  if (test == NULL)
  {
    printf("Right\n");
  }
}

void empty_test()
{
  node test = NULL;
  int x = empty(&test);
  if (x = 1)
  {
    printf("Right\n");
  }
  else
  {
    printf("Wrong\n");
  }
}

void push_test()
{
  node test = NULL;
  char a = 'A';
  push(&test, a);
  if (test->character != 'A' && test->next != NULL)
  {
    printf("Wrong\n");
  }
  else
  {
    printf("Right\n");
  }
}

void pop_test()
{
  char string[2] = "ab";
  node test;
  initialize(&test);
  for (int i = 0; i < 2; i++)
  {
    push(&test, string[i]);
  }
  char x = pop(&test);
  if (x != 'b')
  {
    printf("Wrong\n");
  }
  else
  {
    printf("Right\n");
  }
}

void peek_test()
{
  char string[2] = "ab";
  node test;
  initialize(&test);
  for (int i = 0; i < 2; i++)
  {
    push(&test, string[i]);
  }
  char x = peek(&test);
  if (x != 'b')
  {
    printf("Wrong\n");
  }
  else
  {
    printf("Right\n");
  }
}

void checking_bracket_test()
{
  char test_data[2][9] = {"[][][][]", "((()))(("};
  int result[2] = {1, 0};
  for (int i = 0; i < 2; i++)
  {
    int x = checking_bracket(test_data[i]);
    if (x == result[i])
    {
      printf("Right\n");
    }
    else
    {
      printf("Wrong\n");
    }
  }
}
