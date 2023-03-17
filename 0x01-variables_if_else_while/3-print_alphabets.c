#include <stdio.h>

/**
* main - For loop to print alphabet from a to z
*
* Return: value will be 0 if sucessful
*/

int main(void)
{
	char alphabet;
	char capAlphabet;

	for (capAlphabet = 'a'; capAlphabet <= 'z'; capAlphabet++)
		putchar(capAlphabet);
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
