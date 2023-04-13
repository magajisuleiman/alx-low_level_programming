#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * @grid:  Input string first
 * @height: input string second
 *
 * Return: void (nothing)
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
