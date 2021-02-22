#include "holberton.h"
/**
* print_chessboard - prints a chessboard
* @a: the array
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int x; /*for iteration*/
	int y; /*for iteration*/

	for (x = 0; a[x]; x++)
	{
		for (y = 0; a[y]; y++)
		{
			_putchar(*a[x]);
			_putchar(*a[y]);
		}
		_putchar('\n');
	}
}
