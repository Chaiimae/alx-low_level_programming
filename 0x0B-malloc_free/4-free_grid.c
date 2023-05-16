#include "main.h"
#include <stdlib.h>
/**
 * free_grib - free a 2 dimensional array
 * @grid: 2 grid
 * @height: height dimension of greed
 * Description: free memory of greed
 * Return: Nothing
 *
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
