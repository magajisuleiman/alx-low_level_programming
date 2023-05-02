#include "lists.h"

/**
 * *add_nodeint - function to add a node at beggining
 * @head: refrerence head node for ll
 * @n: data for new node to create
 *
 * Return: NUll if node is empty and node if not empty
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *myNode;

	myNode = (listint_t *) malloc(sizeof(listint_t));

	if (!myNode)
	{
		return (NULL);
	}
	else
	{
		myNode->n = n;
		myNode->next = (*head);
		(*head) = myNode;
	}

	return (myNode);
}
