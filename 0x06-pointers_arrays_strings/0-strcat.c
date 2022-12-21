#include "main.h"

/**
 * strcat - concatinates the string
 * @dest: a pointer to the string
 * @src: the source string to be appended
 * Return: a pointer the destination string @dest
 */
char *strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
