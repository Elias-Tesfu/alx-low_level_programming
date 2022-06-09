#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 * the data
 * @head: the head of the node
 * Return: sum of all the data in the nodes
 */

int sum_dlistint(dlistint_t *head);
{
	size_t result = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}
	return (result);
}
