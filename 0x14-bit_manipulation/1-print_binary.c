#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j;
	int *index = 0;
	unsigned long int resent;

	j = 63;

	while (j >= 0)
	{
		resent = n >> j;

		if (resent & 1)
		{
			_putchar('1');
			index++;
		}
		else if (index)
			_putchar('0');
		j--;
	}
	if (index == NULL)
		_putchar('0');
}

