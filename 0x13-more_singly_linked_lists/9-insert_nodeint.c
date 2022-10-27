#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: double pointer to singly linked list
 * @idx: is the index of the list where the new node should be added
 * @n: the integer to be added in the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp != NULL)
		{
			if (i == idx - 1)
			{
				new_node->next = temp->next;
				temp->next = new_node;
				return (new_node);
			}
			temp = temp->next;
			i++;
		}

		return (NULL);
	}
}
