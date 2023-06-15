#include "lists.h"

/**
 *free_dlistint - function that frees a linked list
 *@head: linked list doubly
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
