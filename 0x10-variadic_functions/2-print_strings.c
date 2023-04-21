#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings and new line
* @separator: string to be printed
* @n: number of strings passed
* @...: number of strings to be printed.
*
* Description: seperated
*/
void print_strings(const char *separator, const unsigned int n, ...)
	{
		va_list strg;
		char *str;
		unsigned int i;


		va_start(strg, n);


		for (i = 0; i < n; i++)
		{
			str = va_arg(strg, char *);


			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);


			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(strg);
	}
