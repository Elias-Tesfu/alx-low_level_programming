#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * len - returns the number of elements in a linked list
 * @h: pointer to denote the head
 * Return: the number of elements
 */
size_t len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}

/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: pointer to denote the head
 * @index: the index of the node, starting at 0
 * Return: NULL if no node or the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;
	unsigned int c;

	new = head;
	c = len(head);

	if (new == NULL)
		c++;

	if (c <= index)
	{
		return (NULL);
	}
	else
	{
		c = 0;
		while (new != NULL)
		{
			if (c == index)
			{
				break;
			}
			else
			{
				c++;
				new = new->next;
			}
		}
		return (new);
	}
}
