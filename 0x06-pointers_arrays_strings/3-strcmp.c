#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: string to be compared
 * @s2: strring to be compared
 *
 * Return: 0 if same, negative if s2 > s1 and positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			return (0);
		else
			return (s1[i] - s2[i]);
	}

	return (s1[i] - s2[i]);
}
