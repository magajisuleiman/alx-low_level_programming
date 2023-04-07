#include "main.h"

/**
 * _sqrt_recursion - function that prints a string, followed by a new line.
 * @n: integer number to find its square root
 *
 *
 * Return: Returns nothing
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (logic(n, 0));
}

/**
 * logic - function to find the quare of numbers
 *
 * @n: interger value to find square root
 * @i: iterator
 *
 * Return: the square root of a number
 * *
*/
int logic(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (logic(n, i + 1));
}
