#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function that prints number followed by new line
* @n: n parameters passed to the function
* @...: arguments passed to the function equal to n number
* @separator: separate two numbers
*
* Return: 0 if n == 0 and sum of ... arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int j;

	j = 0;

	va_start(numbers, n);
	while (j < n)
	{
		printf("%d", va_arg(numbers, int));

		((j != (n - 1)) && (separator != NULL)) ? (printf("%s", separator)) : (0);
		j++;
	}
	printf("\n");
	va_end(numbers);
}

