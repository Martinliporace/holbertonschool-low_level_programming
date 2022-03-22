#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: head
 *
 *
 * Return: of the jedi
 */

void free_listint2(listint_t **head)

{
	listint_t *aux;

	if (!head)
		return;
	aux = *head;
	while (*head)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
	*head = NULL;
}
