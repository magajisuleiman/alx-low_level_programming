#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  func for the number of elements in a linked list_t list.
 * @h: list_t structure pointer in hearder
 *
 * Return: h elements
 */
size_t list_len(const list_t *h)
{
	size_t j;

	j = 0;

	while (h)
	{
		j++;
		h = (*h).next;
	}
	return (j);
}

