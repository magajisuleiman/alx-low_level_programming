#include "lists.h"


/**
 * reverse_listint - Reverse a given list
 * @head: Pointer to a pointer to the list
 *
 * Return: Address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *next;

	curr = *head;
	if (curr == NULL)
		return (NULL);
	next = curr->next;
	curr->next = NULL;
	while (next != NULL)
	{
		curr = next;
		next = next->next;
		curr->next = *head;
		*head = curr;
	}
	return (*head);
}
