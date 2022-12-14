#include <stddef.h>

/**
 * int_index - Searches forr an integer
 *
 * @array: an array of elements to be searced
 * @size: number of elements in array
 * @cmp: pointer to a search function
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* ceck if size is less than zero */
	if (size <= 0)
		return (-1);

	/* check if array & cmp are NULL */
	if (array == NULL || cmp == NULL)
		return (-1);


	/* iterate through the array to get each element */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
