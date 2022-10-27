#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: doule pointer to our singly linked list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
