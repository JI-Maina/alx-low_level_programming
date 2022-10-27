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
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;

	i = 0;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}
