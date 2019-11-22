#ifndef DEF_STRING
#define DEF_STRING

char *read_text(char *file);
void split_string(char *string, int a, int b, char *sub_string);
char *create_sub_string(char *str, int a, int b);
int *find_location(char *str, char *substr, int *array_location);

void find_location_test_1();
void find_location_test_2();
void find_location_test_3();
void find_location_test_4();
void find_location_test_5();
void find_location_test_6();
void find_location_test_7();
#endif
