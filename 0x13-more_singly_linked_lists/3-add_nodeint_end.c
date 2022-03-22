#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: head
* @n: n
*
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)

{

	listint_t *end, *new_node;

	new_node = *head;
	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (new_node->next)
	{
		new_node = new_node->next;
	}
	new_node->next = end;
	return (end);

}

