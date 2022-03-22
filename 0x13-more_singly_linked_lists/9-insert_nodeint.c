#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a position
 * @head: head
 * @idx: index
 * @n: n
 *
 * Return: por donde viniste
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux, *new;
	unsigned int cont = 0;

	if (!head)
		return (NULL);
	aux = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = aux;
		*head = new;
		return (new);
	}
	while (aux)
	{
		if (idx - 1 == cont)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = aux->next;
			aux->next = new;
			return (new);
		}
		cont++;
		aux = aux->next;
	}
	return (NULL);
}
