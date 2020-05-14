#include "monty.h"
/**
 *main - main function
 *@argc: number of arguments
 *@argv: argument
 *
 *
 */
void main(argc, **argv)
{
int i = 0;
size_t size = 0;
int in_line = 0;
char *token;
char  **tokens;
char *del = " \n";
FILE *f;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
tokens = malloc(sizeof(char *) * 64);
if (tokens == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
f = fopen(argv[1], "r");
if (f == NULL)
{
fprintf(stderr, "Error: Can't open file <file>\n", argv[1]);
exit(EXIT_FAILURE);
}
while (getline(&in_line, &size, f) != -1)
token = strtok(in_line, del);
while (token != NULL)
{
tokens[i] = token;
i++;
token = strtok(NULL, del);
}
}
