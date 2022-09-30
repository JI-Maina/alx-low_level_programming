#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{

	int cents, coins, quarters, dimes, penny, nickles, pennies;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}


	quarters = 0;
	while (cents >= 25)
	{
		cents = cents - 25;
		quarters++;
	}

	cents = cents - (quarters * 25);

	dimes = 0;
	while (cents >= 10)
	{
		cents = cents - 10;
		dimes++;
	}

	cents = cents - (dimes * 10);

	nickles = 0;
	while (cents >= 5)
	{
		cents = cents - 5;
		nickles++;
	}

	cents = cents - (nickles * 5);

	pennies = 0;
	while (pennies >= 2)
	{
		cents = cents - 2;
		pennies++;
	}

	cents = cents - (pennies * 2);
	
	penny = 0;
	while (cents >= 1)
	{
		cents = cents - 1;
		penny++;
	}

	cents = cents - (penny * 1);

	coins = quarters + dimes + nickles + pennies + penny;

	printf("%d\n", coins);

	return (0);
}
