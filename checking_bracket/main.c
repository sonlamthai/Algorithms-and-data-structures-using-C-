#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "checking_bracket.h"

int main(int argc, char const *argv[])
{
  char str[100];

  printf("Enter your string:\n");
  fgets(str, 100, stdin);

  int x = checking_bracket(str);

  if (x == 1)
  {
    printf("True\n");
  }
  else
  {
    printf("False\n");
  }
  return 0;
}
