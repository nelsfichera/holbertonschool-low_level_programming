#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *alloc_grid - return pointer to 2d array of ints
* @width: the width
* @height: the...
* Return: grid
*/
int **alloc_grid(int width, int height)
{
	int **grid; /*pointer to the grid*/
	int x; /*for iteration*/
	int y; /*for iteration*/

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(width * sizeof(int));
		if (grid[y] == NULL)
		{
			for (y = 0; y < height; y++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			grid[y][x] = 0;
	}
	return (grid);
}
