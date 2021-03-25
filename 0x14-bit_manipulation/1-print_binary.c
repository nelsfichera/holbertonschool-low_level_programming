#include "holberton.h"
/**
* print_binary - print a number in binary notation
* @n: number to print
* Return: v0id
*/
void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		_putchar(1 + '0');
		return;
	}
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
