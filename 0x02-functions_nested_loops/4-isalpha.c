#include "main.h"
#include "stdio.h"

/**
 * _isalpha - checks for alphabetical letters
 * @: a character to be check on
 * Return: returns 0 or 1 depending on condition
 */
int _isalpha(int c)
{

	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
	  
}
