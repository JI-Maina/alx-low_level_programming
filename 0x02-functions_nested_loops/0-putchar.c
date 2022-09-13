#include <main.h>

/**
 * main - prints _putchar
 *
 * Return: 0
 */

int main(void)
{

	char c[8] = "_putchar";

	for (int i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
