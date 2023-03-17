#include <stdio.h>

/**
* main - For loop to print alphabet from a to z
*
* Return: value will be 0 if sucessful
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
			continue;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
