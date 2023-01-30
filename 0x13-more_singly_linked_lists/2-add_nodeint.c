#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - add new node
 * @head: node head
 * @n: integer
 *
 * Description: Add a new node
 * Return: New node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->next = *head;
		new->n = n;
		*head = new;

	}
	return (new);
}
