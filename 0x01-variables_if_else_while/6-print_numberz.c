#include <stdio.h>

/**
* main - Program that prints all single digit number of base 10
*
* Return: will return 0 if successful.
*/

int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
		putchar(digit);
	putchar('\n');

	return (0);
}
