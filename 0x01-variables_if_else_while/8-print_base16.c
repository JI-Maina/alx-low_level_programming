#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16
 *
 * Return: 0 always (success)
 */

int main(void)
{
	int a = '0', b = 'a';

	/* print 0-9 */
	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	/* print a to f */
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
