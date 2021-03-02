#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_grid - free the grid! free the grid! free the grid!
* @grid: grid
* @height: the height
* Return: pointer to array
*/
void free_grid(int **grid, int height)
{
	int x; /*for iteration*/

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
