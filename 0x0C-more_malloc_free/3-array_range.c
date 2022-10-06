#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: A pointer to the newly created array,
 * Or NULL if it fails to allocate memory
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);

	/* allocate memory to ptr */
	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	/* intialize ptr with int min upto max */
	for (i = 0; min <= max ; i++)
	{
		ptr[i] = min;
		min++;
	}


	return (ptr);
}
