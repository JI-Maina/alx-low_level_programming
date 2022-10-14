#include <stdlib.h>

/**
 * array_iterator - Iterates through an array
 *
 * @array: array to iterate through
 * @size: size of array
 * @action: our functions
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
