#include "main.h"

int _islower(int c);

/**
 * _islower  - function that checks lower case charater
 * @c: character to be checked
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
