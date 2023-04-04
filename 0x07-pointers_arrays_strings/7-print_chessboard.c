#include "main.h"

/**
 * print_chessboard - function that locates a character in a string.
 * @a: characters to search from
 *
 * Return: Returns a pointer to the memory area
*/
void print_chessboard(char (*a)[8])
{
	int l;
	int m;

	l = 0;

	while (l < 8)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[l][m]);
		_putchar('\n');
		l++;
	}
}
