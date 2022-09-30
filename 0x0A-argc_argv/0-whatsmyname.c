#include "main.h"

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
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');

	return(0);
}
