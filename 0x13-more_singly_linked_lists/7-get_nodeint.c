#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @index: index
 * @head: head
 *
 * Return: pum
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont = 0;
	listint_t *aux = head;

	while (aux)
	{
		if (cont == index)
			return (aux);
		cont++;
		aux = aux->next;
	}
	return (0);
}
