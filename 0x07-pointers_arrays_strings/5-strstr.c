#include "main.h"

/**
 * _strstr - function that locates a character in a string.
 * @haystack: characters to search from
 * @needle: character searched for
 *
 * Return: Returns a pointer to the memory area
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
