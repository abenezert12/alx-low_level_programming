#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete a index node
 * @head: node head
 * @index: the index
 * Description: Add a new node
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;
	listint_t *tmp;

	tmp = *head;

	if (*head && index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (index == i + 1)
		{
			node = tmp->next;
			if (node)
			{
				tmp->next = node->next;
				free(node);
				return (1);
			}
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
