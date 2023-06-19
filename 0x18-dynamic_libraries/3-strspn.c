#include "main.h"

/**
 * _strspn - function that locates a character in a string.
 * @s: characters to search from
 * @accept: character searched for
 *
 * Return: Returns a pointer to the memory area
*/
unsigned int _strspn(char *s, char *accept)
{

	unsigned int i;
	int j;

	i = 0;

	while (*s)
	{
		j = 0;

		while (accept[j])
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
			j++;
		}
		s++;
	}
	return (i);
}
