#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 * @head: pointer to denote the head
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *new, *temp;

	tempm = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && c < index - 1)
	{
		temp = temp->next;
		c++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	new = temp->next->next;
	free(temp->next);
	remp->next = new;

	return (1);
}
