#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lowercase alphabet in reverse order
 *
 * Return: 0 always (success)
 */

int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
