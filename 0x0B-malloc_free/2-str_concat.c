#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatcatinate two strings s1 and s2
 * @s1: Input string first
 * @s2: input string second
 *
 * Return: pointer ofconcat string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int j;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] !=  '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[j] = s2[j];
		i++, j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
