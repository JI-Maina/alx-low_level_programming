#include "main.h"

/**
 * factorial - calculates the factoial of a given number
 *
 * @n: integer to calculate its factorial
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	int f;

	if (n < 0)
		f = -1;

	else if (n == 0)
		f = 1;

	else
		f = n * factorial(n - 1);

	return (f);
}
