#include "holberton.h"
/**
* print_alphabet_x10 - print alpha x10
* Return: void
*/
void print_alphabet_x10(void)
{
	int x;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	}
}
