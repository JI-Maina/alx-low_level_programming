#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Adds positive numbers
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0 (success), or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int sum, n, i, j;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		n = strlen(argv[i]);

		for (j = 0; j < n; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
