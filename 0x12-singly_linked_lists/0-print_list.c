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
	const list_t *ptr = h;

	count = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%lu] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
