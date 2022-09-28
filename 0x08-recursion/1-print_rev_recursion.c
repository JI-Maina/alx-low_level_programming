#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	_putchar(*(s - 1));

	if (*s != '\0')
		_print_rev_recursion(s + 1);
}
