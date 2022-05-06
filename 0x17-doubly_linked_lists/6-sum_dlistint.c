#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: head
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		aux = head;
		sum = sum + aux->n;
		head = head->next;
	}
	return (sum);
}
