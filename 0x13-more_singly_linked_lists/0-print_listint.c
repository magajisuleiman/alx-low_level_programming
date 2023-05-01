#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: refrence head of linked list
 *
 *
 * Return: print out element ot the linke list.
*/
size_t print_listint(const listint_t *h)
{
	/* create a *temp pointer to head */
	const listint_t *temp;
	unsigned int element = 0;

	temp = h;

	/* use temp to traverse the ll and print data */
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		element++;
		temp = (*temp).next;
	}
	return (element);
}
