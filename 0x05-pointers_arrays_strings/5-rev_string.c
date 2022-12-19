#include "main.h"

/**
 * rev_string - reverses string
 * @s: input
 * Return:string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[0] != '\n')
	{
		c++;
	}
	for (i = 0; i < c; c++)
	{
		c--;
		rv = s[i];
                s[i] = s[c];
		s[c] = rv;
	}
}
