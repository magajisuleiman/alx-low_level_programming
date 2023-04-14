
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1: string source
 * @s2: destination string
 * @n: size of dynamic memory
 *
 * Return: Always pointe
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int k;
	unsigned int l;
	unsigned int lenS1;
	unsigned int lenS2;

	k = 0;
	l = 0;
	lenS1 = 0;
	lenS2 = 0;

	while (s1 && s1[lenS1])
		lenS1++;
	while (s2 && s2[lenS2])
		lenS2++;
	if (n < lenS2)
		ptr = malloc(sizeof(char) * (lenS1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (lenS1 + lenS2 + 1));
	if (!ptr)
		return (NULL);
	while (k < lenS1)
	{
		ptr[k] = s1[k];
		k++;
	}
	while (n < lenS2 && k < (lenS1 + n))
		ptr[k++] = s2[l++];
	while (n >= lenS2 && k < (lenS1 + lenS2))
		ptr[k++] = s2[l++];
	ptr[k] = '\0';
	return (ptr);
}
