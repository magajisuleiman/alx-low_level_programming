#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int  counter = 0;

	while (head != NULL)
	{
		if (counter == index)
		{
			return (head);
		}
		head->next = head;
		counter++;
	}
	return (NULL);
}
