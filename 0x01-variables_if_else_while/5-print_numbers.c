#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digits of base 10
 *
 * Return: 0 always (success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
