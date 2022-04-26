#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: the head
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *actual = *h;
	size_t i = 0;
	int rest;

	while (actual)
	{
		rest = actual - actual->next;
		if (rest > 0)
		{
			temp = actual->next;
			free(actual);
			actual = temp;
			i++;
		}
		else
		{
			free(actual);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
