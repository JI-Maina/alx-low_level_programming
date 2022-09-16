#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: n is an integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == n)
			{
				_putchar('\\');
				_putchar('\n');
			}
			if (
		}
	}
}
