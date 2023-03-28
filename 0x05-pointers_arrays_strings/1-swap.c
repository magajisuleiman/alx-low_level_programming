#include "main.h"

/**
 * swap_int - function that swaps the values of two integer
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
*/

void swap_int(int *a, int *b)
{

	int num;

	num = *a;
	*a = *b;
	*b = num;

}
