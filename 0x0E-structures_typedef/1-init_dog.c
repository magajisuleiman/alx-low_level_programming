#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer variable fordynamic memory
 * @name: structure member name initialized
 * @age: sructure member age to initialized
 * @owner: structure member owner to initialized
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* create memory of size struct dog and check NULL*/
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	/* initialize structure members*/
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
