#include "holberton.h"
/**
* print_chessboard - prints a chessboard
* @a: the array
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int x = 0; /*for iteration*/
	int y = 0; /*for iteration*/

	while (y < 8)
	{
		y = 0;

	while (x < 8)
	{
		_putchar(a[x][y]);
		x++;
	}
		_putchar('\n');
		y++;
	}
}
