#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - entry point
 *
 * Description: assigns a random number
 *
 * Return: 0 always (success)
 */

int main(void)

{

		int n, l;



		srand(time(0));

		n = rand() - RAND_MAX / 2;

		/* find last digit of n */
		l = (n % 10);

		if (l > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, l);
		}
		else if (l == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, l);
		}
		else if (l < 6 && l != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
		}
		return (0);

}
