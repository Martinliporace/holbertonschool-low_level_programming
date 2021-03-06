#include "lists.h"
#include <string.h>

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: head
  * @str: str
  *
  * Return: the address of the new list or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	char *strd = strdup(str);
	list_t *new_node;
	list_t *c;

	if (str)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		new_node->str = strd;
		new_node->len = strlen(str);
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			c = *head;
			while (c->next)
				c = c->next;
			c->next = new_node;
			return (c);
		}
	}
	return (NULL);
}
