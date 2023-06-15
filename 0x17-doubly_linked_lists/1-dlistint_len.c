#include "lists.h"

/**
 * dlistint_len -  Function that prints element of a node
 * @h: head node of the liked list
 *
 * Return: idx which is count of number of element
 *
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t idx = 0;

	while (h != NULL)
	{
		h = h->next;

		idx++;
	}
	return (idx);
}
