#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: the destination pointer string
 * @src: pointer to string to be copied
 * @n: number of characters to be pointed from string src
 *
 * Return: pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
