#include "main.h"

/**
 * _print_nimbers - function that checks for uppercase character
 * @num: argument to check
 *
 * Return: 0 if successfulit
*/

void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		_putchar(num);
	_putchar('\n');
	return (0);
}

