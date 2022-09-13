#include "main.h"

/**
 * _islower - Checks wether a character is lower
 * @c: c is an ascii character
 *
 * Return: 1 (yes) & 0 (no)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
