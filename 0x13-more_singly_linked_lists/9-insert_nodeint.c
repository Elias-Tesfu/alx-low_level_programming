#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to denote the head
 * @idx: index of the list where the new node should be added
 * @n: the node to be inserted
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int c = 0;

	temp = *head;
	while (temp && c < idx - 1)
	{
		temp = temp->next;
		c++;
	}

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if (c + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}
