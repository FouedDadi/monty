#include "monty.h"
/**
 * find_inst- function that calls functions
 * @tokens: tokens
 * @stack: head
 * @line_number: line number of the error
 */

void find_inst(char **tokens, stack_t **stack, unsigned int line_number)
{
int i = 0;
instruction_t instructions[] = {
{"push", push},
{"pall", pall},
{NULL, NULL}
};
data = atoi(tokens[1]);
while (instructions[i].opcode != NULL)
{
if (strcmp(instructions[i].opcode, tokens[0]) == 0)
instructions[i].f(stack, line_number);
i++;
}
}
