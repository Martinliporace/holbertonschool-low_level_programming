#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - coso
* @h: pum
* Return: ahre
*/




size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 1;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{

		i++;
		h = h->next;
	}


	return (i);
}
