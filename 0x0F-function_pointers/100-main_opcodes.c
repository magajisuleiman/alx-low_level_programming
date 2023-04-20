#include <stdio.h>
#include <stdlib.h>

/**
* main - function that prints it upcode
* @argc: argument number
* @argv: vector argument
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int byt;
	int i;
	char *array;

	(argc != 2) ? (printf("Error\n"), exit(1)) : (0);

	byt = atoi(argv[1]);

	(byt < 0) ? (printf("Error\n"), exit(2)) : (0);

	array = (char *)main;

	i = 0;
	while (i < byt)
	{
		if (i == (byt - 1))
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
		i++;
	}
	return (0);
}
