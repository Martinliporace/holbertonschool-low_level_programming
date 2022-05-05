#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a listint_t list.
* @head: head
* @n: n
*
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{

	dlistint_t *end, *new_node;

	new_node = *head;
	end = malloc(sizeof(dlistint_t));
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
