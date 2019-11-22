#ifndef DEF_CHECKING_BRACKET
#define DEF_CHECKING_BRACKET

struct node
{
  char character;
  struct node* next;
};

typedef struct node *node;

void initialize(node *top);
int empty(node *top);
void push(node *top, char a);
char pop(node *top);
char peek(node *top);
int checking_bracket(char str[]);

void initializt_test();
void empty_test();
void push_test();
void peek_test();
void pop_test();
void checking_bracket_test();

#endif
