#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to a first list element
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
