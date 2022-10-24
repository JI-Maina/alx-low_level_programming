#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: double pointer to singly linked list
 * @str: string -(malloced string)
 *
 * Return: a pointer to the new list_t list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		temp = new_node;

		new_node->next = *head;
		*head = temp;
	}

	return (*head);
}
