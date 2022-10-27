#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in listint_t list
 *
 * @head: pointer to singly listint_t list
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
