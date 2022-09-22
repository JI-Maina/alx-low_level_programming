#include "main.h"

/**
 * reverse_array - Reverses the content of array of integers
 *
 * @a: pointer to an array
 * @n: number of elements in array pointed by a
 *
 * Return: void always
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
