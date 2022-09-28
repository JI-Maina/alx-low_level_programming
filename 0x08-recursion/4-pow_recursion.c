#include "main.h"

/**
 * _pow_recursion - finds the value of x raised to thhe power of y
 *
 * @x: an integer to calculate its power
 * @y: an integer by which to raise x
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
