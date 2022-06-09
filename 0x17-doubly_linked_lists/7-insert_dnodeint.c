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
