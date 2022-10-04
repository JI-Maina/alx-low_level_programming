#include "main.h"

/**
 * create_array - Creates an array of chars & initializes it with a specific char
 *
 * @size: an unsigned integer
 * @c: size of the array to be created
 *
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(*ptr));
	
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
	}

	return (ptr);
}
