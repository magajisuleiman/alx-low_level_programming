#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: characters to search from
 * @c: character searched for
 *
 * Return: Returns a pointer to the memory area
*/
char *_strchr(char *s, char c)
{

	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);

}
