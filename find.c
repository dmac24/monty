#include "monty.h"

/**
 * find - find new line
 * @cof: content
 * Return: 1 or 0
 */
int find(char *cof)
{
	char *opcode = "\n";

	while (*cof != '\0')
	{
		if (*opcode == *cof)
		{
			opcode++;
			cof++;
			if (*opcode == '\0')
				return (1);
		}
		else
			cof++;
	}
	return (0);
}
