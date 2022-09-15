#include <stdio.h>

/**
 * main - Prints numbers from 1 - 100
 * and substitutes multiples of 3 with fizz
 * multiples o 5 are substituted with buzz
 * while multiples of both 3 and 5 are substituted with fizzbuzz
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
