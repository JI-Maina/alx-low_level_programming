#include "main.c"

/**
 * _abs - computes the absolute value of an integer
 * @a: an int is an integer
 *
 * Return: 0 (success)
 */

int _abs(int a)
{
	int b;
	b = (a * -1);

	if (a > 0)
	{
		_putchar(a);
	}
	else
	{
		_putchar(b);
	}
	return (0);
}
