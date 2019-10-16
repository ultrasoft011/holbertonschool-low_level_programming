#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*free_grid - free a grid
*@grid: double pointer
*@height: Height
*/
void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
{
	free(grid[x]);
}
	free(grid);
}
