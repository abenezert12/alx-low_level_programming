#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * reverse_listint - reverse a node
 * @head: node head
 * Description: Add a new node
 * Return: New node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t  *last;

	if (!head && !*head)
		return (NULL);

	first = *head;
	*head = NULL;
	while (first)
	{
		last = first;
		first = first->next;
		last->next = *head;
		*head = last;
	}
	return (*head);
}
