#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to function required
 *
 * Return: nothing void function
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	j = 0;
	if (array == NULL || action == NULL)
		return;

	while (j < size)
	{
		action(array[j]);
		j++;
	}
}
