#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - functin that returns the sum of all the data in a linked list
 * @head: pointer to denote the head
 * Return: the sum of the elements or 0 if its empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
