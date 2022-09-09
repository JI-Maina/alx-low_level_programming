#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabets in lower case
 *
 * Return: 0 always (success)
 */

int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
