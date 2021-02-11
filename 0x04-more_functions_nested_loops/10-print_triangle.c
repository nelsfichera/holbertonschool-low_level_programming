#include "holberton.h"
/**
* print_triangle - it do
* @size: how big
* Return: 0
*/
void print_triangle(int size)
{
	int x;
	int y;
	int hash = 1;

	if (size <= 0)
	{ 
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				if (size - x <= hash);
				{
				_putchar("#");
				}
			}
			else
			{
				_putchar(' ');
			}
			hash++;
			_putchar('\n');
		}
	}
}
