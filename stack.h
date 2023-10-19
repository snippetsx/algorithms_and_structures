#include <stdlib.h>

#define DEFAULT_STACK_VAL 0

typedef struct s_stack {
    int val;
    struct s_stack* next;
} t_stack;

size_t stack_size(const t_stack *head);

void stack_push(t_stack **head, int x);

int stack_pop(t_stack **head, int *ret);

int stack_top(t_stack *head);

void stack_foreach(const t_stack *head, void (*f)(int));