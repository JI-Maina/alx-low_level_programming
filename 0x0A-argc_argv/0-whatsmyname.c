#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: void always
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
