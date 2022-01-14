#include "monty.h"

/**
 * _strcmp - compares strings
 * @opcode: a string to be compared
 * @cof: content
 * Return: 0
 */
int _strcmp(char *opcode, char *cof)
{
	while (*cof != '\0')
	{
		if (*cof == ' ')
			cof++;
		else if (*opcode == *cof)
		{
			opcode++;
			cof++;
			if (*opcode == '\0' && (*cof == ' ' || *cof == '\n' || *cof == '\0'))
				return (1);
		}
		else
			return (0);
	}
	return (0);
}
