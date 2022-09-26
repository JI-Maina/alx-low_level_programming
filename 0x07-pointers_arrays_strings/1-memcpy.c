#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination of the copied characters
 * @src: source of the charcters to be copied
 * @n: number of charcters to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
