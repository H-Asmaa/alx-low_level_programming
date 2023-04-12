#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check the code.
 * @width: variable
 * @height: variable
 * Return: Always 0.
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
