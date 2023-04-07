#include "main.h"

/**
 * is_prime_number - function that prints a string, followed by a new line.
 * @n: integer number to find its square root
 *
 *
 * Return: Returns nothing
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (primelogic(n, n - 1));
}

/**
 * primelogic - function to find the quare of numbers
 *
 * @n: interger value to find square root
 * @i: iterator
 *
 * Return: the square root of a number
 * *
*/
int primelogic(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n %  i == 0 && i > 0)
		return (0);
	return (primelogic(n, i - 1));
}
