#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @b: character to replace in n bytes
 * @n: n number of bytes needed to be replace
 * @s: pointer address from which replacement begins
 * Return: Returns a pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);

}
