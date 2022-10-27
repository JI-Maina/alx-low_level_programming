#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: double pointer to singly linked listint_t list
 *
 * Return: the deleated head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int var;

	if (*head == NULL)
		return (0);

	temp = *head;

	*head = (*head)->next;
	var = temp->n;
	free(temp);
	temp = NULL;


	return (var);
}
