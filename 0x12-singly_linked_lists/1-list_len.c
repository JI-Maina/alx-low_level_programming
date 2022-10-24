#include "lists.h"

/**
 * list_len - calculates numer of elements in a linked list
 *
 * @h:singly linked list node structure
 *
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			count++;
		}
		h = h->next;
	}

	return (count);
}
