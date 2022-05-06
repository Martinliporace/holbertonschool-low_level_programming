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
	dlistint_t *new_node, *end = *head;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	new_node->prev = end;
	return (new_node);
}
