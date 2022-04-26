#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint _t list
 * @head: the pointer to denote the position
 * @n: the element in the list
 * Return: the address of a new element or NULL if error.
 */

listint_t *addn_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last != NULL)
			last = last->next;

		last->next = new;
	}
	return (new);
}
