#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: Destination memory to copy t0
 * @src: source memory to copy from
 * @n: pointer address from which replacement begins
 * Return: Returns a pointer to the memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;

	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);

}
