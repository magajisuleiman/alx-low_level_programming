#include "lists.h"

/**
 *add_dnodeint - function that add new node at the beginning
 *@head: head of doubly linked list
 *@n: data for new node
 *
 *Return: NULL if list is empty, new_node if not empty
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;
	return (new_node);
}
