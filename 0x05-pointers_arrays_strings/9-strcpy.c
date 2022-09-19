#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: points to the buffer
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
