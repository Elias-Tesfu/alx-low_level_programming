#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - a functin that returns the number of elements in a linked list
 * @h: the elements
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	int c;

	c = 0;
	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
