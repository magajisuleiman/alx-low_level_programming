#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j;
	int index;
	unsigned long int present;
	unsigned long int xor;

	xor = n ^ m;
	index = 0;
	j = 63;

	while (j >= 0)
	{
		present = xor >> j;
		if (present & 1)
			index++;
		j--;
	}

	return (index);
}

