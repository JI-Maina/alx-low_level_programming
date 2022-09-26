#include "main.h"

/**
 * _memset - fills memory with constant byte
 *
 * @s: pointer to variable to be filled
 * @b: byte to be used to fill
 * @n: an unsigned integer
 *
 * Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
