#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a listint_t list.
* @head: head
* @n: n
*
* Return: the address of the new element or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{

	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)

		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	if (*head)
		{
		(*head)->prev = new_node;
		new_node->next = *head;
		}
	else
		new_node->next = NULL;
	*head = new_node;
	return (new_node);
}
