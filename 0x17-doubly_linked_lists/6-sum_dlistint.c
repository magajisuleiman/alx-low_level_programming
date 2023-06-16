#include "lists.h"

/**
 *sum_dlistint - function returns sum of all the data of a linked list
 *@head: hed of linked list
 *
 *Return: 0 if list is empty and sum if otherwise
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum  + head->n;
		head = head->next;
	}
	return (sum);
}
