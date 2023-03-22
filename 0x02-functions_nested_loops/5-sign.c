#include "main.h"

int print_sign(int n);

/**
 * print_sign - function that checks for alphabetic character
 * @n: number
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
