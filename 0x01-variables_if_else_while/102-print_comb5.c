#include <stdio.h>

/**
 * main - entry
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int a, b, c, d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			d = c + 1;
			while (c <= '9')
			{
				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (a < '8' || b < '7' || c < '8' || d < '8')
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				d = '0';
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
