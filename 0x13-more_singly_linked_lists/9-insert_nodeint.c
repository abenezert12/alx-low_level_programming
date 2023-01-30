#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - add new node
 * @head: node head
 * @idx:  int index
 * @n: new node
 * Description: Add a new node
 * Return: the address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node;
	listint_t *tmp = *head;

	node = malloc(sizeof(listint_t));

	if (head && node)
	{
		if (idx == 0)
		{
			node->next = *head;
			*head = node;
			node->n = n;
			return (node);
		}
		for (; i < (idx - 1); i++)
		{
			if (!tmp->next && (i != (idx - 1)))
				return (NULL);

			tmp = tmp->next;
		}

		node->next = tmp->next;
			node->n = n;

			tmp->next = node;
			return (node);
	}
	if (node)
		free(node);
	return (NULL);
}
