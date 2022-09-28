#include "main.h"

/**
 * _strlen_recursion - finds the legnth of a string
 *
 * @s: string to calculate its length
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
		return (len - 1);

	else
		return (len + _strlen_recursion(s + 1));
}
