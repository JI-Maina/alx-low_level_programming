#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 *
 * @str: an array of characters to be converted
 *
 * Return: char in uppercase
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else
			str[i] = str[i];
		i++;
	}

	return (str);
}
