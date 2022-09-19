#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: a is an integer
 * @b: b is an integer
 *
 * Return: always void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	
	*b = *a - *b;
	*a = *a - *b;
}
