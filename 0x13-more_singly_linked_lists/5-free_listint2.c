#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to denote the head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			new = *head;
			*head = new->next;
			free(new);
		}
	}
}
