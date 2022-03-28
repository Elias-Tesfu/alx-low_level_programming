#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @board: the int
 * Return
 */

void print_chessboard(char board)
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf(board[i][j]);
		}
	}
}
