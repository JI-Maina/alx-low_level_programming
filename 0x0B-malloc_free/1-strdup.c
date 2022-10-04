#include "main.h"

/**
 * _strdup - Allocates space in memory which contains copy of str
 *
 * @str: string pointer that contains a string
 *
 * Return: A pointer to the duplicated string.
 * Or NULL if no memory is allocated.
 */

char *_strdup(char *str)
{
	unsigned int n, j;
	int i;
	char *ptr;

	n = 1;

	i = 0;
	while (str[i] != '\0')
	{
		n++;
		i++;
	}

	if (n == 0)
	{
		return (NULL);
	}

	ptr = malloc(n * sizeof(*str));

	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (j < n)
	{
		ptr[j] = str[j];
		j++;
	}

	return (ptr);
}
