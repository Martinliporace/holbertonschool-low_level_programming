#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @index: index
 * @head: head
 *
 * Return: pum
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont = 0;
	dlistint_t *aux = head;

	while (aux)
	{
		if (cont == index)
			return (aux);
		cont++;
		aux = aux->next;
	}
	return (0);
}
