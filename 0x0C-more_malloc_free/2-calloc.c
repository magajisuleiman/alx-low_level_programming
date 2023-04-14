#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: Array element
 * @size: element size
 *
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;
	unsigned int length;

	if (nmemb == 0 || size == 0)
		return (NULL);

	length = size * nmemb;

	pointer = malloc(length);

	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		pointer[i] = 0;
	}
	return (pointer);
}
