#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the nth node of a linked list
 *@head: head node of linked list
 *@index: position ofnode to e return
 *
 *Return: Null if list is empy and note at index
 *
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int  counter = 0;

	while (head != NULL)
	{
		if (counter == index)
			return (head);
		head  = head->next;
		counter++;
	}
	return (NULL);
}
