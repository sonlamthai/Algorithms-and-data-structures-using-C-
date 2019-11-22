#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "location.h"

char *read_text(char *file)
{
  int n = 0;
  FILE *text_file = fopen(file, "r");
  int current_char = 0;

  while (current_char != EOF)
  {
    current_char = fgetc(text_file);
    n++;
  }

  char *str = malloc(n * sizeof(char));

  rewind(text_file);

  current_char = 0;

  int i = 0;
  while (current_char != EOF)
  {
    current_char = fgetc(text_file);
    str[i] = current_char;
    i++;
  }
  str[i - 1] = '\0';

  fclose(text_file);
  return str;
}

void split_string(char *string, int a, int b, char *sub_string)
{

  int k = 0;

  for (int i = a; i <= b; i++)
  {
    sub_string[k] = string[i];
    k++;
  }
  sub_string[k] = '\0';
}

char *create_sub_string(char *str, int a, int b)
{
  int n =  strlen(str);

  char *sub_string = malloc(n * sizeof(char));
  char *result;

  split_string(str, a, b, sub_string);

  int x = strlen(sub_string);
  result = malloc(x * sizeof(char));
  strcpy(result, sub_string);
  free(sub_string);

  return result;
}

int *find_location(char *str, char *substr, int *array)
{
  int n = strlen(str);
  int m = strlen(substr);

  int i = 0, j = 0;
  int k = 0;
  int freq = 0, h = 0;

  array = malloc(sizeof(int));

  for (i = 0; i <= n - m; i++)
  {
    k = 0;
    for (j = 0; j < m; j++)
    {
      if (str[i + j] != substr[j])
      {
        k = -1;
      }
    }
    if (j == m && k == 0)
    {
      freq++;
      array = realloc(array, freq * sizeof(int));
      array[h] = i;
      h++;
    }
  }
  printf("frequency : %d\n", freq);

  return array;
}
