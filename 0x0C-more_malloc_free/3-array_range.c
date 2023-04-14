
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - check the code
 * @min: string source
 * @max: destination string
 *
 * Return: Always pointe
 */
int *array_range(int min, int max)
{
	int *p;
	int k;
	int diff;

	if (min > max)
		return (NULL);

	diff = max - min + 1;
	p = malloc(sizeof(int) * diff);

	if (p == NULL)
		return (NULL);
	for (k = 0; min <= max; k++)
		p[k] = min++;
	return (p);
}
