#include "monty.h"

/**
 * pushint - int for push opcode
 *
 * @cof: content of the file
 * @nl: number of line
 *
 * Return: number
 */
int pushint(char *cof, int nl)
{
	char *opcode = "push";

	while (*cof != '\0')
	{
		if (*opcode == *cof)
		{
			opcode++;
			cof++;
			if (*opcode == '\0')
				while (*cof)
				{
					if ((*cof >= '0' && *cof <= '9') || *cof == '-')
					{
						mixnum(cof, nl);
						return (atoi(cof));
					}
					else if (*cof == ' ')
						cof++;
					else
					{
						fprintf(stderr, "L%d: usage: push integer\n", nl);
						exit(EXIT_FAILURE);
					}
				}
		}
		else
			cof++;
	}
	return (0);
}

/**
 * mixnum - find number combinations
 *
 * @cof: content
 * @nl: number of line
 *
 * Return: 1.
 */

int mixnum(char *cof, int nl)
{
	int i = 1;

	while (cof[i])
	{
		if (cof[i] == '\0' || cof[i] == '\n')
			break;
		if ((cof[i] >= '0' && cof[i] <= '9') || cof[i] == ' ')
			i++;
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", nl);
			exit(EXIT_FAILURE);
		}
	}
	return (1);
}
