#include "main.h"

/**
 * helperfunction - checks if square root of number exists
 * @num: number
 * @sqrt: possible square root of number
 * Return: sqrt of number or -1 for error
 */
int helperfunction(int num, int psqrt)
{
	if ((psqrt * psqrt == num))
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperfunction(num, psqrt + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: number to find square root of 
 *
 * Return: square root of n
 *        -1 if n does not have a natural number sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
