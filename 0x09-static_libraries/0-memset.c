#include "main.h"

/**
 * _memset - fills the first n bytes of memory
 * @s: pointer to the memory area
 * @c: the character to fill
 * @n: number of bytes
 * description _memset: over there
 * Return: a poiner to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
