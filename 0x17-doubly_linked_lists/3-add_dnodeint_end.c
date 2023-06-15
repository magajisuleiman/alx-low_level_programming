#include "lists.h"

/**
 *add_dnodeint_end - function that add new node at the beginning
 *@head: head of doubly linked list
 *@n: data for new node
 *
 *Return: NULL if list is empty, new_node if not empty
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
