#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node of a listint_t linked list.
 * @head: head
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *tmp;
	unsigned int count = 0;

	if (!*head)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		aux = NULL;
		return (1);
	}
	while (count < index)
	{
		if (aux->next)
		{
			tmp = aux;
			aux = aux->next;
		}
		else
			return (-1);
		count++;
	}
	tmp->next = aux->next;
	free(aux);
	aux = NULL;
	return (1);
}
