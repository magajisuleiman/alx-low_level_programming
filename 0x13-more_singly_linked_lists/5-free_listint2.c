#include "lists.h"

/**
 * free_listint2 - function that frees memo
 * @head: list needed to be freed
 *
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head =  NULL;
}
