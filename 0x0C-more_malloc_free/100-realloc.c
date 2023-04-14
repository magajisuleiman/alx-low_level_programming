#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocating memory blocks and free at the end
 * @ptr: old memory pointer for reallocation
 * @old_size: old  memory size to reallocate to
 * @new_size: new memory size
 *
 * Return: pointer of newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *p_old;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	p_old = ptr;

	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
			p[k] = p_old[k];
	}

	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)
			p[k] = p_old[k];
	}

	free(ptr);
	return (p);
}

