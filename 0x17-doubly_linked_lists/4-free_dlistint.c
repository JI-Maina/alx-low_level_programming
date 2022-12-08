#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: doubly linked list
 *
 * Return: always none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *ptr;

	while (temp->next != NULL)
		temp = temp->next;

	while (head->next != NULL)
	{
		ptr = temp->prev;
		ptr->next = NULL;
		free(temp);
		temp = ptr;
	}

	free(head);
}
