#include "main.h"

/**
 * print_rev -  a string, in reverse, followed by a new line
 * @s: s is an array of characters
 *
 * Return: always void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
