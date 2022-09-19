#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: a is an array of integers
 * @n: n is the number of elements in array a
 *
 * Return: always void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
