#include "main.h"
/**
 * free_grid - frees memory created by previous function
 * @grid: integer pointer
 * @height: height of the grid
 *
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
