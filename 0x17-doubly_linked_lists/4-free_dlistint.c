#include "lists.h"

/**
 * free_dlistint - function to free a dlistint
 * @head: the head of the list
 * Return: a list which is freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node = NULL;

	while (head != NULL)
	{
		tmp_node = head->next;
		free(head);
		head = tmp_node;
	}
}
