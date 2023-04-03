#include "main.h"

/**
* print_chessboard - Prints chessboard
* @a: Array of chess pieces
* Return: Void
*/

void print_chessboard(char (*a)[8])
{
	unsigned int i, j, n = 8;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
