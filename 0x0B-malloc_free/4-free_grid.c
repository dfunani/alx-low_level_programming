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
	int *j;

        for (i = 0; i < height; i++)
        {
		j = grid[i];
		free(j);
        }
}
