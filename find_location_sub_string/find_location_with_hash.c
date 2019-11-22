#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
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
  int n = strlen(str);
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

  long h = 1;
  long d = 257;          // base
  long q = 100000000003; // a prime
  long hash_sub = 0, hash_str = 0;
  int i = 0, j = 0;
  int freq = 0, k = 0;
  array = malloc(sizeof(int));

  for (i = 0; i < m - 1; i++)
  {
    h = (d * h) % q;
  }

  for (i = 0; i < m; i++)
  {
    hash_sub = (d * hash_sub + substr[i]) % q;
    hash_str = (d * hash_str + str[i]) % q;
  }

  for (i = 0; i <= n - m; i++)
  {
    if (hash_sub == hash_str)
    {
      freq++;
      array = realloc(array, freq * sizeof(int));
      array[k] = i;
      k++;
    }

    if (i < n - m)
    {
      hash_str = (d * (hash_str - str[i] * h) + str[i + m]) % q;

      if (hash_str < 0)
      {
        hash_str = (hash_str + q);
      }
    }
  }
  printf("Frequency : %d\n", freq);

  return array;
}
