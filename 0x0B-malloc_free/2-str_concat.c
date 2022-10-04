#include "main.h"

/**
 * str_concat - Concatenates two strings
 *
 * @s1: first string be concatenated
 * @s2: second string to be concatenated
 *
 * Return: A pointer containing strings s1 & s2.
 * Or NULL if there was no concatenation.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	ptr = malloc((len1 * sizeof(char)) + ((len2 + 1) * sizeof(char)));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}


	return (ptr);
}
