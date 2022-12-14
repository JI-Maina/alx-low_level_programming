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
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
