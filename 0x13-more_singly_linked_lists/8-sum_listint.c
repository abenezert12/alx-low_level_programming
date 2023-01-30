#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_listint - add new node
 * @head: node head
 * Description: Add a new node
 * Return: New node
 */
int sum_listint(listint_t *head)
{
	unsigned int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
