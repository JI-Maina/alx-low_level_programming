#include "lists.h"

/**
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *ptr;
	dlistint_t *temp = *head;

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (index == 0)
	{
		temp = temp->next;
		index--;
	}

	if (temp->next == NULL)
	{
		ptr = temp->prev;
		ptr->next = NULL;
		free(temp);
		ptr = temp;
		return (1);
	}
	else
	{
		ptr = temp->prev;
		tmp = temp->next;
		ptr->next = tmp;
		tmp->prev = ptr;
		free(temp);
		ptr = temp;
		tmp = temp;
		return (1);
	}

}
