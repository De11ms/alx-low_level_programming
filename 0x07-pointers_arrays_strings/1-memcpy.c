#include "main.h"

/**
 * _memcpy - copies  @n from the memory area
 * @dest: pointer to the memory
 * @src: the source buffer
 * @n: the number of bytes to copy from @src
 *
 * Return: pointer to the destination buffer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
