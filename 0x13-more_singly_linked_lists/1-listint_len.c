#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of elemnts in a linked list
 * @h: the elements in the linked list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
