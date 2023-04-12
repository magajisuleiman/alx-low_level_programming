#include "main.h"
#include <stdlib.h>

/**
 * _strdup - check the code for ALX School students.
 * @str: Input string
 *
 * Return: pointer of char
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		ptr[j] = str[j];
	return (ptr);
}
