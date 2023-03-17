#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Assign a random number to n in each execution
*
* Return: will be 0 if successful
*/

int main(void)
{
	int n;
	int lDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lDigit = n % 10;

	if (lDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lDigit);
	else if (lDigit < 6 && lDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDigit);
	else
		printf("Last digit of %d is %d and is 0\n", n, lDigit);

	return (0);
}
