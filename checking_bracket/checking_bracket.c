#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "checking_bracket.h"

void initialize(node *top)
{
  *top = NULL;
}

int empty(node *top)
{
  if (*top == NULL)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void push(node *top, char a)
{
  node push = malloc(sizeof(node));

  push->character = a;
  push->next = NULL;

  if (empty(top) == 0)
  {
    push->next = *top;
  }

  *top = push;
}

char pop(node *top)
{
  node pop;
  if (empty(top) == 0)
  {
    pop = *top;
    *top = (*top)->next;
  }
  char i = pop->character;
  free(pop);

  return i;
}

char peek(node *top)
{
  if (empty(top) == 0)
  {
    char i = (*top)->character;
    return i;
  }
}

int checking_bracket(char str[])
{
  int n = strlen(str);
  node stack;
  initialize(&stack);

  for (int i = 0; i < n; i++)
  {
    if (str[i] == '[' || str[i] == '(' || str[i] == '{')
    {
      push(&stack, str[i]);
    }
    if (str[i] == ']')
    {
      if (peek(&stack) != '[')
      {
        return 0;
      }
      else
      {
        pop(&stack);
      }
    }
    if (str[i] == ')')
    {
      if (peek(&stack) != '(')
      {
        return 0;
      }
      else
      {
        pop(&stack);
      }
    }
    if (str[i] == '}')
    {
      if (peek(&stack) != '{')
      {
        return 0;
      }
      else
      {
        pop(&stack);
      }
    }
  }

  if (empty(&stack) == 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
