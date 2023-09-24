#include "main.h"
/**
*print_chessboard - prints out a chessboard
*@a: the array
*
*
*Return: nothing.
*/
void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int c = 0;

		while (c < 8)
		{
			_putchar(a[i][c]);
			c++;
		}
	_putchar('\n');
	i++;
	}
}
