#include "holberton.h"
/**
* print_line - you say print a line
* @n: i say how long
* Return: 0
*/
void print_line(int n)
{
	int x;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
