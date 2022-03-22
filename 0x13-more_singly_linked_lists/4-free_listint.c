#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: head
 *
 *
 * Return: of the jedi
 */

void free_listint(listint_t *head)

{
	listint_t *aux = head;

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
