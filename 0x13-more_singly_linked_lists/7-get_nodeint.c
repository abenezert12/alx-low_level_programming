#include "lists.h"
/**
 * get_nodeint_at_index - add new node
 * @head: node head
 * @index: unsigned int
 * Description: Add a new node
 * Return: New node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		if (i == index)
			return (tmp);
		i++;
		head = head->next;
	}
	return (NULL);
}
