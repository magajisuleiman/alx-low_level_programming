#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: n parameters passed to the function
* @...: arguments passed to the function equal to n number
*
* Return: 0 if n == 0 and sum of ... arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int j;
	int sum;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (j = 0, sum = 0; j < n; j++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

