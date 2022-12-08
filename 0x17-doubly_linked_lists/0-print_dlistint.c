#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: doubly linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count += 1;
		temp = temp->next;
	}

	return (count);
}
