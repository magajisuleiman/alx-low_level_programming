#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function to add a node at beggining
 * @head: refrerence head node for ll
 * @n: data for new node to create
 *
 * Return: NUll if node is empty and node if not empty
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create the the new node */
	listint_t *myNode;

	myNode = (listint_t *) malloc(sizeof(listint_t));

	/* add data to the new node */
	myNode->n = n;

	if (myNode == NULL)
	{
		return (NULL);
	}
	else
	{
		/* make next of new node equal to head */
		myNode->next = (*head);

		/* head is equal to new node */
		(*head) = myNode;
	}

	return (myNode);
}
