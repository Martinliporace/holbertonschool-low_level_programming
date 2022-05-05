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

	dlistint_t *new_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)

		return (NULL);
	if (head == NULL)
		return (NULL);
	else
	{	new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
	}
	*head = new_node;

	return (new_node);
}
