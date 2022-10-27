#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 *
 * @head: single linked list
 * @index: place to delete node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int i, count = 0;

	if (*head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		if (index < count)
		{
			temp = *head;
			ptr = (*head)->next;
			if (index == 0)
			{
				*head = (*head)->next;
				free(temp);
			}
			else
			{
				for (i = 0; i < index - 1; i++)
				{
					temp = temp->next;
					ptr = ptr->next;
				}
				temp->next = ptr->next;
				free(ptr);
			}
		}
		else
			return (-1);
	return (1);
	}
	else
		return (-1);

}
