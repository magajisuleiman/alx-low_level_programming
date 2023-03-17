#include <stdio.h>

/**
* main - Program that prints all single digit number of base 10
*
* Return: will return 0 if successful.
*/

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);
	printf("\n");

	return (0);
}
