#include "main.h"

/**
 * more_numbers - prints 10 times the numbers rrom 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j < 10)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar(j / 10);
				_putchar(j % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}