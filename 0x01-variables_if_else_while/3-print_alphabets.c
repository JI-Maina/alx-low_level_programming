#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabet in lower & uppercase
 *
 * Return: 0 always (success)
 */

int main(void)
{
	int a = 'a', A = 'A';

	/* print in lowercase */
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	/* print in uppercase */
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}

	putchar('\n');
	return (0);
}
