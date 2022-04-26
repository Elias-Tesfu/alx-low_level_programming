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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;

	*head = new;

	return (*head);
}
