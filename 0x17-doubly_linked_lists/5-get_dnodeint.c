#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 *
 * @head: doubly linked list
 * @index: unsigned integer
 *
 * Return: the nth node, if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		temp = temp->next;
		index--;
	}

	return (temp);
}
