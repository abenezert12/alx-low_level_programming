#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - at the end
 * @head: node head
 * @n: integer
 *
 * Description: adds a new node at the end
 * Return: number of elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = NULL;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->next = NULL;
		new->n = n;
		if (!(*head))
		{
			*head = new;
			return (new);
		}
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
