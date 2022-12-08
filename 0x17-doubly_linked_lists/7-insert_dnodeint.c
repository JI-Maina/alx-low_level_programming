#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: doubly linked list
 * @idx: index to insert node
 * @n: integer to be inserted at node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	dlistint_t *ptr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
	{
		*h = add_dnodeint(h, n);
		return (*h);
	}

	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}

	if (temp->next == NULL)
	{
		*h = add_dnodeint_end(h, n);
		return (*h);
	}

	ptr = temp->prev;
	ptr->next = new_node;
	new_node->next = temp;
	new_node->prev = ptr;
	temp->prev = new_node;
	return (*h);
}
