#include <stdio.h>

/**
* main - For loop to print alphabet from a to z
*
* Return: value will be 0 if sucessful
*/

int main(void)
{
	int num;
	int hex;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (hex = 97; hex <= 102; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
