#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times diagonal drawn
 */
void print_diagonal(int n)
{
	int line, gap;

	if (n > 0)
{
	for (line = 0; line <= n; line++)
	{
	for (gap = 0; gap <= line; gap++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	if (line == n - 1)
	{
	continue;
}
putchar('\n');
	}
	}
	_putchar('\n');
}

