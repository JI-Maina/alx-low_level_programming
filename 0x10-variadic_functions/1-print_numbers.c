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

	if (separator == NULL)
		return;


	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);
		if (i <= n - 2)
		{
			printf("%d%s", x, separator);
		}
		else
		{
			printf("%d\n", x);
		}
	}

	va_end(ap);
}
