#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary number to be converted
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 or  b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int weight = 1, length = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				decimal = decimal + weight;
			}
			weight = weight * 2;
		}
		else
			return (0);
	}
	return (decimal);
}
