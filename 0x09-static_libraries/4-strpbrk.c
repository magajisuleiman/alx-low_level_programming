#include "main.h"

/**
 * _strpbrk - function that locates a character in a string.
 * @s: characters to search from
 * @accept: character searched for
 *
 * Return: Returns a pointer to the memory area
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;

		while (accept[j])
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return ('\0');
}
