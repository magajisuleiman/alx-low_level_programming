#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument array
 *
 * Return: (0)
*/
int main(int argc, char *argv[])

{
	int cents[] = {25, 10, 5, 2, 1};
	int i;
	int money;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	change = 0;


	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		while (money >= cents[i])
		{
			change++;
			money -= cents[i];
		}
	}
	printf("%d\n", change);
	return (0);
}
