#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: fixed parameter
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int x;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);

		printf("%d", x);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(ap);
}
