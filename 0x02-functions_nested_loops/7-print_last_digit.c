#include "main.h"

int print_last_digit(int);

/**
 * print_last_digit - function that prints the last digit of a number.
 * @num: integer number to determine last digit
 *
 * Return: lastDigit of integer number num
*/
int print_last_digit(int num)
{
	int lastDigit;

	if (num < 0)
	{
		num = -num;
	}
	lastDigit = num % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
