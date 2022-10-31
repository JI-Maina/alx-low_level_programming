#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 *
 * @n: number to flip
 * @m: number to be flipped
 *
 * return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, i, number;

	number = n ^ m;
	for (i = 0; number != 0; i++)
	{
		if (number & 1)
			count++;
		number = number + 1;
	}
	return (count);
}
