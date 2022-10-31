#include "main.h"

/**
 * bin - converts decimal to binary
 * @n: decimal number to convert
 */
void bin(unsigned int n)
{
	if (n != 0)
	{
		bin(n >> 1);
		_putchar((n & 1) + '0');
	}
}

/**
 * print_binary - prints binary representation
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		bin(n);
	}
}
