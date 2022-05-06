#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: head
 *
 *
 * Return: of the jedi
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	if (!head)
		free(aux);
	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	head = NULL;
}
