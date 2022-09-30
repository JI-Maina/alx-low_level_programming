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
	int i;
	(void)argc;

	i = 0;
	while (argv[0][i] != '\0')
	{
		putchar(argv[0][i]);
		i++;
	}
	putchar('\n');

	return(0);
}
