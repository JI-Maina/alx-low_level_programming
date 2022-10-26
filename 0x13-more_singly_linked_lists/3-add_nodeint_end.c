#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: double pointer to singly linked list
 * @n: integer to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;


	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = new_node;

		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = temp;
	}

	return (*head);
}
