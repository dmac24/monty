#include "monty.h"

/**
 * main - main
 * @argc: number of arguments
 * @argv: arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	static char *string[1000] = {NULL};
	int n = 0;
	FILE *fop;
	size_t bufsize = 1000;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fop = fopen(argv[1], "r");
	if (fop == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}


	for (n = 0; getline(&(string[n]), &bufsize, fop) > 0; n++)
		;
	execute(string, stack);
	free_cof(string);
	fclose(fop);
	return (0);
}
