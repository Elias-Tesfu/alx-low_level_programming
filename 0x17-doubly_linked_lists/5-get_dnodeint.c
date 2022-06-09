#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: the head of the node
 * @index: the index
 * Return: the index node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t c = 0;

	while (head != NULL)
	{
		if (c == index)
			break;
		c++;
		head = head->next;
	}
	return (head);
}
