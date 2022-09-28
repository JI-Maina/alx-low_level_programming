#include "main.h"

/**
 * _sqrt_recursion - finds natural sqrt of a number
 *
 * @n: an integer to find its sqrt
 *
 * Return: the sqrt of n
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < -1)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}


	i++;

	return (_sqrt_recursion(n));

	if (i > n / 2)
	{
		return (-1);
	}
}
