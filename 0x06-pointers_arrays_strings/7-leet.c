#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @s: an array of characters to be encoded
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int j, i;
	char k[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; k[j] != '\0'; j++)
		{
			if (s[i] == k[j] || s[i] == (k[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}

	return (s);
}
