#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different two digits combination
 *
 * Return: 0 always
 */

int main(void)
{
	int a = '0', b = '0';

	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			putchar(a);
			putchar(b);

			if (a < '8' || b < '9')
			{
				putchar(',');
				putchar(' ');
			}
			b++;

		}
		a++;

	}
	putchar('\n');

	return (0);
}
