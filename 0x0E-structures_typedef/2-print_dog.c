#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  Write a function that prints a struct dog
 * @d: pointer variable fordynamic memory
 *
 *
*/
void print_dog(struct dog *d)
{
	/*check for null struct pointer*/
	if (d == NULL)
		return;
	/*check for null structure members*/
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	/*print structure members*/
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);

}
