#include "main.h"
/**
 * free_grid - Free a 2 dimensional Array
 * @grid: 2D array
 * @height: the number of rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height == 0)
return;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
