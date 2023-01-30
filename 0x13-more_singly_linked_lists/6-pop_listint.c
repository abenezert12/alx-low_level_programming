#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - add new node
 * @head: node head
 * Description: Add a new node
 * Return: New node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!*head)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
