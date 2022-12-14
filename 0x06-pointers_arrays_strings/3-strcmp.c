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

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
