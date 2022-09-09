#include <stdio.h>

/**
 * main - entry point
 *
 * Desciption: prints all possible combinations of single digit numbers
 *
 * Return: 0 always (success)
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
