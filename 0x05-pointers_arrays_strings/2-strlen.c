#include "main.h"

/**
 * _strlen - Calculates the lenth of a string
 * @s: s is a string
 *
 * Return: an integer that is the length of the string
 */

int _strlen(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; i < s[i]; i++)
		count = count + 1;
	return (count);
}
