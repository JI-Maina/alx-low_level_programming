#include "main.h"

/**
 * _strchr - searches for first occurence of a character in string
 *
 * @s: the string to be scanned
 * @c: the character to be searched in s
 *
 * Return: a pointer to the first occurence of character c
 * or null if the character is not fond.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
