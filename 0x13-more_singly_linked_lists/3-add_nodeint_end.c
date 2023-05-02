#include "lists.h"

/**
 * *add_nodeint_end - function to add a node at beggining
 * @head: refrerence head node for ll
 * @n: data for new node to create
 *
 * Return: NUll if node is empty and node if not empty
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode;
	listint_t *temp;

	endNode = (listint_t *)malloc(sizeof(listint_t));

	if (!endNode)
		return (NULL);

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}
	else
	{
		endNode->n = n;
		endNode->next = NULL;

		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = endNode;
	}
	return (endNode);
}
