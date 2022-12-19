#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of array
 * @a: array
 * @n: number of value to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < 0; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
