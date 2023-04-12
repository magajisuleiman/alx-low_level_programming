#include "main.h"
#include <stdlib.h>

/**
 * create_array - check the code for ALX School students.
 * @size: memory size to be allocated
 * @c: char charater to be printed
 *
 * Return: pointer of char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
