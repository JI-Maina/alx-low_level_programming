#include "main.h"

/**
 * print_alpabet_x10 - prints lowercase alphabet 10 times
 *
 * Return: void
 */

void print_alpabet_x10(void)
{
	int i = 0;
	char a;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');

		i++;
	}

}
