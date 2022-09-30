#include <stdio.h>

/**
 * main - prints the number of arguements passed into it
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: int always
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
