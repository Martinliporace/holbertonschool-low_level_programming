#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - coso
* @h: pum
* Return: ahre
*/

size_t print_dlistint(const dlistint_t *h)

{
	size_t i = 1;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	printf("%d\n", h->n);
	return (i);
}
