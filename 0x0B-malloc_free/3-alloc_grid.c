#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - make 2-D array dynamically
 * @col: column of the array
 * @row: row of the array
 *
 * Return 
 * : pointer to the 2-D array
 */
int **alloc_grid(int col, int row)
{
	int x, y, **grid;

	grid = malloc(row * sizeof(*grid));

	if (row < 1 || col < 1 || grid == 0)
		return (NULL);

	for (x = 0; x < row; x++)
	{
		grid[x] = malloc(col * sizeof(**grid));
		if (grid[x] == 0)
		{
			while (x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < col; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
