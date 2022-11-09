#include "main.h"

/**
 * alloc_grid - array to store the desired str
 * @width: str to concat
 * @height: str to concat to s1
 *
 * Return: pointer to char
 *
 */

int **alloc_grid(int width, int height)
{
	int j;
	int i;
	int **rows = (int **)malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		rows[i] = (int *)malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			rows[i][j] = 0;
		}
	}
	return (rows);
}
