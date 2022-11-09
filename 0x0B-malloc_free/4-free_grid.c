#include "main.h"

/**
 * free_grid - array to store the desired str
 * @grid: str to concat
 * @height: str to concat to s1
 *
 */

void free_grid(int **grid, int height)
{
	int i;

        for (i = 0; i < height; i++)
        {
		free(grid[i]);
        }
	return (rows);
}
