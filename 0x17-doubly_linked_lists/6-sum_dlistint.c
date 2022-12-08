#include "lists.h"

/**
 * sum_dlistint - gets the sum of all the data (n) of linked list
 *
 * @head: doubly linked list
 *
 * Return: the sum of all the data (n), if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
