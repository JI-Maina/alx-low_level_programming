#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: doubly linked list
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		return (*head);
	}
}
