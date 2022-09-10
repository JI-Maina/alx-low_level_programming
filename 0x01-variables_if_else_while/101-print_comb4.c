#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints all possible combinations of three digits
 *
 * Return: 0 always
 */

int main(void)
{
	int a, b, c;

	a = '0';
	b = '0';
	c = '0';

	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a < '7' || b < '8' || c < '9')
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}

	putchar('\n');
	return (0);
}
