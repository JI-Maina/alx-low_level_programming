#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: double pointer to a singly linked list
 * @str: string - (malloc'ed string)
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;
	list_t *last_node;


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);


	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		temp = new_node;
		last_node->next = temp;
	}

	return (*head);
}
