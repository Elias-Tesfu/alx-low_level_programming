#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - a function taht reverses a listint_t
 * @head: pointer to denote the head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_ **head)
{
	listint_t *new, *temp;

	temp = NULL;
	new = NULL;

	while (*head != NULL)
	{
		new = *head;
		*head = (*head)->next;
		new->next = temp;
		temp = new;
	}
	*head = new;

	return (*head);
}
