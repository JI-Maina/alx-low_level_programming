#include "main.h"

/**
 * print_func_name - prints the name of the program
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: void always
 */

void print_func_name(int argc, char* argv[])
{
	int i;
	(void)argc;

	i = 0;
	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
}
