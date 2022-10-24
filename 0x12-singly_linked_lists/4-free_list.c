#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to singly lined list
 *
 * Return: Nothing always (0)
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
