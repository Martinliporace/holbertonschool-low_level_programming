#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a position
 * @head: head
 * @idx: index
 * @n: n
 *
 * Return: por donde viniste
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new;
	unsigned int cont = 0;

	if (!h)
		return (NULL);
	aux = *h;
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = aux;
		*h = new;
		return (new);
	}
	while (aux)
	{
		if (idx - 1 == cont)
		{
			new = malloc(sizeof(dlistint_t));
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
