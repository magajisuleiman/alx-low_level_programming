#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of integers
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: nothing void function
 *
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	j = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (j < size)
	{
		if (cmp(array[j]))
			return (j);
		j++;
	}
	return (-1);
}
