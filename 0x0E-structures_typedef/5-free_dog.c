#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free all memory allocated
 * @d: pointer carrying memory address to be freed
 *
 *
*/
void free_dog(dog_t *d)
{
	while (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
