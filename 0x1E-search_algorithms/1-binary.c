#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array of ints using the Binary
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located
 *         or -1 if value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, first, mid, last;

	if (array == NULL)
		return (-1);

	for (first = 0, last = size - 1; last >= first;)
	{
		printf("Searching in array: ");
		for (i = first; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = first + (last - first) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return (-1);
}
