#include "main.h"

/**
 * _isdigit - Checks if a char is a digit
 * @c: c is an integer
 *
 * Return: 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
