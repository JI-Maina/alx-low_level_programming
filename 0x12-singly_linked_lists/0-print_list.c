#include "lists.h"

/**
 * print_list -  all the elements of a list_t list
 *
 * @h: singly linked list node structure
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *str = h;

	count = 0;
	while (h != NULL)
	{
		if (str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
