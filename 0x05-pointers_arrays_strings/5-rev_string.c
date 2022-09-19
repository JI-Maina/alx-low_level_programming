#include "main.h"

/**
 * rev_string - reverses a string
 * @s: s is an array o characters
 *
 * Return: always void
 */

void rev_string(char *s)
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
