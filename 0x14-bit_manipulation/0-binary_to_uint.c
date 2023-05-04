#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function converts a binary number to unsigned int
 * @b: string of binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int base_10 = 0;

	j = 0;

	if (b == NULL)
		return (0);
	while (b[j])
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		base_10 = 2 * base_10 + (b[j] - '0');
		j++;
	}
	return (base_10);
}
