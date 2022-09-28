#include "main.h"

/**
 * is_prime_number - Checks if n is a prime number
 *
 * @n: integer to be checked
 *
 * Return: 1 if n is a prime number,
 * 0 if not
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)

		return (0);
	
	else (n % i == 0)

		return (1);
}
