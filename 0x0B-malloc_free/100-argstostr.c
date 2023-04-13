#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function that frees a 2 dimensional grid previously
 * @ac: Input string first
 * @av: input string second
 *
 * Return: void
 */

char *argstostr(int ac, char **av)
{
	int k;
	int l;
	int m;
	int n;
	char *ptr;

	k = 0;
	l = 0;
	m = 0;
	n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
			n++;
	}
	n += ac;

	ptr = malloc(sizeof(char) * n + 1);

	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
		{
			ptr[m] = av[k][l];
			m++;
		}
		if (ptr[m] == '\0')
		{
			ptr[m++] = '\n';
		}
	}
	return (ptr);
}
