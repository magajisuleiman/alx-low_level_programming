#include "lists.h"

/**
 * print_dlistint -  Function that prints element of a node
 * @h: head node of the liked list
 *
 * Return: idx which is count of number of element
 *
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t idx = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		idx++;
	}
	return (idx);
}
