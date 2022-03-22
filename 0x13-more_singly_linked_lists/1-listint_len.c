#include "lists.h"
#include <stdio.h>

/**
* listint_len - coso
* @h: pum
* Return: ahre
*/




size_t listint_len(const listint_t *h)

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
