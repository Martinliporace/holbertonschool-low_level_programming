#include "lists.h"

/**
* free_list - frees a list_t list
* @head: head
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *c;

	while (head)
	{
		c = head;
		head = head->next;
		free(c->str);
		free(c);
	}
}
