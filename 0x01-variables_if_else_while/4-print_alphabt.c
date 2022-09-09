#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabet without q & e
 *
 * Return: 0 always (success)
 */

int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
