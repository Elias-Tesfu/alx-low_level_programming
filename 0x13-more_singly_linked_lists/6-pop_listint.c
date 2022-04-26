#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function tat deleates the head of a node
 * @head: pointer to denote the head of the list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int i = 0;

	if (*head == NULL)
		return (i);
	
	new = *head;
	i = temp->n;
	*head = (*head)->next;
	free(new);

	return (i);
}
