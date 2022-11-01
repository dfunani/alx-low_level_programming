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

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
