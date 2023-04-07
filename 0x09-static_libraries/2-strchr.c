#include "main.h"

/**
 * _strchr - locates a character in aa string
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: If c found - a pointer  to the firs occorance
 *         If c is not found _ NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0 ; s[index] >= '\n'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
