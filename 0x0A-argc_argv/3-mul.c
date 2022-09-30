#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0 (success), 1 (error)
 */

int main(int argc, char *argv[])
{
	int x, y, multiply;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	multiply = x * y;

	printf("%d\n", multiply);
	return (0);
}
