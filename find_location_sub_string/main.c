#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "location.h"

int main()
{
  printf("Initializing the original string...\n\n");
  char *file = "text.txt";
  char *str = read_text(file);
  int a = 0;
  int b = 0;

  printf("Let create substring!!!!\n\n");
  printf("Please select front:\n");
  scanf("%d", &a);
  printf("Please select rear :\n");
  scanf("%d", &b);

  char *substr = create_sub_string(str, a, b);
  printf("Program is running...Please wait a few seconds...\n");

  clock_t start, end;
  start = clock();

  int *array_location = find_location(str, substr, array_location);

  end = clock();
  double total = (double)(end - start) / CLOCKS_PER_SEC;
  printf("time : %.2lf\n", total);

  return 0;
}
