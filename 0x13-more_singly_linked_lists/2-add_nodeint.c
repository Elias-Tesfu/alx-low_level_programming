#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * @head: the pointer to denote the position
 * @n: the elemet in the list
 * Return: the address of a new element or NULL if error
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	unsigned int i = 0;

	if (n == '\0')
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == 0)
		return (NULL);

	new->n = n;
	if (new->n == '\0')
	{
		free(new);
		return (NULL);
	}

	while (new->n)
	{
		i++;
	}
	new->next = *head;
	*head = new;

	return (new);
}
