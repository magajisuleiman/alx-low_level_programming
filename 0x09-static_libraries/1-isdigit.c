#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: argument to check
 *
 * Return: 1 if it is acpital and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

