#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the
 * beginning
 * @head: pointer to the head of the node
 * @n: data in the node
 * Return: a new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp_node = NULL;
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	temp_node = *head;
	*head = new_node;
	new_node->next = temp_node;

	if (temp_node != NULL)
		temp_node->prev = *head;

	return (new_node);
}
