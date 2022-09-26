#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */

void print_chessboard(char (*a)[8])
{
	int u, f;

	for (u = 0; u < 8; u++)
	{
		for (f = 0; f < 8; f++)
		{
			_putchar(a[u][f]);
		}
		_putchar('\n');
	}
}
