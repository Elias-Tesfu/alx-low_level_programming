#include "lists.h"

/**
 * dlistint_len - counts number of nodes
 * @h: head of node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
