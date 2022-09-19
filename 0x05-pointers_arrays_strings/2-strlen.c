#include "main.h"

/**
 * _strlen - Calculates the lenth of a string
 * @s: s is a string
 *
 * Return: an integer that is the length of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count])
	{
		count++;
	}

	return (count);
}
