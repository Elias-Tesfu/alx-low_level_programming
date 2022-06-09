#include "lists.h"

/**
 * insert_dnodeint_at_index - func that inserts new node
 * at a given point
 * @h: the header
 * @idx: the place where the new node is beinig inserted
 * @n: the value to insert
 * Return: updated list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *temp = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		*h = new;
		new->next = temp;
		new->prev = NULL;
		temp->prev = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		if (count == idx) /* found back */
		{
			new->prev = temp; /* current prev to back link */
			new->next = temp->next; /* current next to front link*/
			temp->next = new; /* back next link */
			new->next->prev = new; /* from prev link */
		}
		temp = temp->next;
		count++;
	}
	if (count == idx) /* end of DLL */
	{
		new->prev = temp; /* current prev to back link */
		new->next = NULL; /* current next to NULL*/
		temp->next = new; /* back next link */
	}
	if (count < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
