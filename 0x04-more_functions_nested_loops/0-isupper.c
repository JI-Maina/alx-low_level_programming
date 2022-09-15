#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: c is an integer
 *
 * Return: 1 if c is upper otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
