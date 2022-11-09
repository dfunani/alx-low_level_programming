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
	int *arr = (int *)malloc(sizeof(int) * height * width);
	int **array = &arr;
	return (array);
}
