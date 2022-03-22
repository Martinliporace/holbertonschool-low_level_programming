#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: head
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *aux = head;
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
