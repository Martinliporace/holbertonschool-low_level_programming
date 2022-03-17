#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
* list_len - returns the number of elements in a linked list_t list.
* @h: elements
*
*
* Return: the number of nodes
*/

size_t list_len(const list_t *h)

{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
