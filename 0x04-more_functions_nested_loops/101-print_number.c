#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: n is an integer
 *
 * Return: void
 */

void print_number(int n)
{
	int size, i;

	size = sizeof(n);

	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			n = n / 10;
			_putchar(n);
		}
	}
	else
	{
		_putchar(n);
	}
	_putchar('\n');
}
