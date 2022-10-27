#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: double pointer to singly linked list
 * @idx: is the index of the list where the new node should be added
 * @n: the integer to be added in the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	listint_t *new_node;
	unsigned int i;

	if (*head == NULL && idx != 0)
		return (NULL);

	ptr = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = new_node;
	ptr = *head;

	i = 0;
	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}

	temp->next = ptr->next;
	ptr->next = temp;

	return (*head);
}
