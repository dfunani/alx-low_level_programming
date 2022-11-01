#include "main.h"

/**
 * print_chessboard - displays a bord given as a 2D array
 * @a[8]: pointer to the board array
 *
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (a[i])
	{
		j = 0;
		while (a[i][j])
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
