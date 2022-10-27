#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list
 *
 * @head: pointer to a singly listint_t linked list
 * @index: index of the node
 *
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	return (head);
}
