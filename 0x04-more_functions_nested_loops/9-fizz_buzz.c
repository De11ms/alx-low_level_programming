#include <stdio.h>

/**
 * main - prints Buzz each number of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 1;

printf("%d", n);

	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
		printf(" Fizzbuzz");
}
		else if (n % 3 == 0)
{
		printf(" Fizz");
}
		else if (n % 5 == 0)
		{
		printf(" Buzz");
		}
		else
		{
		printf(" %d", n);
		}
	}
	printf("\n");
return (0);
}
