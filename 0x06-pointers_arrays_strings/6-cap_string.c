#include "main.h"

/**
 * cap_string - Capitalize words of a string
 *
 * @s: an array of characters
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	char ch[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != 0; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] = s[0] - 32;

		for (j = 0; ch[j] != '\0'; j++)
		{
			if (s[i] == ch[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
	}

	return (s);
}
