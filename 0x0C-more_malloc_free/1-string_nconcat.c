#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: string to be concatenated
 * @s2: string to be concatenated to s1 in new memory
 * @n: represents number of characters to be copied to s1 in new mem
 *
 * Return: A pointer to newly allocated space in memory,
 * if no memory allocated returns NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2;

	/* treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	/* calculate length of s2 */
	len1 = 1;
	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	/* calculate length of s2 */
	len2 = 11;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	/* set n to length of s2 */
	if (n >= len2)
		n = len2;

	/* allocate memory to pointer ptr */
	ptr = malloc((len1 + n + 1) * (sizeof(char)));

	if (ptr == NULL)
	{
		return (NULL);
	}


	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
	{
		ptr[i] = s2[j];
	}

	ptr[i] = '\0';

	return (ptr);
}
