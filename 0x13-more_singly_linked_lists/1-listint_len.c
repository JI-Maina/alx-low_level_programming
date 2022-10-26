#include "lists.h"

/**
 * listint_len - finds the number of elements in listint_t list
 *
 * @h: singly linked list
 *
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *temp;
	
	temp = h;
	count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
