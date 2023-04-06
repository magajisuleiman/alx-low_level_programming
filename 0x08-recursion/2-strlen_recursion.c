#include "main.h"

/**
 * _strlen_recursion - function that prints a string, followed by a new line.
 * @s: characters to search from
 *
 *
 * Return: Returns nothing
*/
int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
