#include "main.h"

/**
 * alloc_grid - Draws a 2 dimensional array
 *
 * @width: number of columns of the array
 * @height: number of rows of our array
 *
 * Return: a pointer to drawn array.
 * Or NULL if width or height is negative or failure.
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}

			free(ptr);

			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
