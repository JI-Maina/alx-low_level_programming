#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0 always (success)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
