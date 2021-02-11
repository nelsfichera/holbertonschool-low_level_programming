#include "holberton.h"
/**
* print_square - make quad
* @size: bigness
*/
void print_square(int size)
{
	int x, y;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
