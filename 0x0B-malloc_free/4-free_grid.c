#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - fuction that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: stores the address of the allocated storage
 * @height: stores the height of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
