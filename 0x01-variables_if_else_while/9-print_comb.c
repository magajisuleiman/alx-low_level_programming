#include <stdio.h>

/**
* main - For loop to print alphabet from a to z
*
* Return: value will be 0 if sucessful
*/

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
