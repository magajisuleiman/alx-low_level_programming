#include <stdio.h>

/**
* main - For loop to print alphabet from a to z
*
* Return: value will be 0 if sucessful
*/

int main(void)
{
	char alphabet;

	alphabet = 'a';

	for (alphabet; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
