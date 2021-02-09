#include "holberton.h"
/**
* print_alphabet - alpha but putchar
* Return: 0
*/

void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
