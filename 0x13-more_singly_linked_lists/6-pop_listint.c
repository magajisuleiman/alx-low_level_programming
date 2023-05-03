#include "lists.h"

/**
 * pop_listint - function to delete
 * @head: head of first pointer
 *
 * Return: 0 if link is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data  = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
