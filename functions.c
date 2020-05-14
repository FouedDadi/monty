#include "monty.h"
/**
 *push - function that pushes an element to the stack
 *@stack: stack
 *@line_number: line number of error
 */
void push(stack_t **stack, unsigned int line_number)
{
struct _s *new = malloc(sizeof(struct stack_s));
if (new == NULL)
{
fprintf(stderr, "L%d: usage: push integer", line_number);
exit(EXIT_FAILURE);
}
new->n = data;
new->next = *stack;
new->prev = NULL;
if (*stack != NULL)
(**stack)->prev = new;
**stack = new;
}
/**
 *pall - function that prints values of the stack
 *@stack: stack
 *@line_number: line number of the error
 */
void pall(stack_t **stack, unsigned int line_number)
{
int x;
for (x = 0; *stack != NULL; x++)
{
printf("%d\n", (*stack->n));
*stack = (*stack->next);
}
}

/**
 *pop - function removes the top element of the stack
 *@stack: stack
 *@line_number: line number of the error
 */
void pop(stack_t **stack, unsigned int line_number)
{
struct stack_s *tmp, *suivant;
unsigned int x, index;
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack", line_number);
exit(EXIT_FAILURE);
}
tmp = *stack;
if (index == 0)
{
*stack = tmp->next;
free(tmp);
return (1);
}
for (x = 0; x < (index - 1) && tmp != NULL; x++)
tmp = tmp->next;
if (tmp == NULL)
return (-1);
if (tmp->next == NULL)
return (-1);
suivant = tmp->next->next;
free(tmp->next);
tmp->next = suivant;
}
/**
 *pint - function that prints the first element of the stack
 *@stack: stack
 *@line_number: line number of error
 */
void pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{}
fprintf(stderr, "L%d: can't pint, stack empty", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack->data));
}
