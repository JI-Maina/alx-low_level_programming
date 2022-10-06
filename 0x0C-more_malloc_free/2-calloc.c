#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 *
 * @nmemb: number of elements in the array to be allocated
 * @size: size of a single nmemb
 *
 * Return: A pointer to the allocated memory,
 * Or NULL i no memory is allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* malloc allocates memory to pointer ptr */
	ptr = malloc(nmemb * size);

	/* if allocation fails terminate calloc */
	if (ptr == NULL)
		return (NULL);

	fill = ptr;

	/* intitialize memory to 0 */
	for (i = 0; i < (size * nmemb); i++)
	{
		fill[i] = '0';
	}

	return (ptr);
}
