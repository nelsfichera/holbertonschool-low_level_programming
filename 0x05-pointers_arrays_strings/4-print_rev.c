#include "holberton.h"
/**
* _strlen2 - strlen the remix (bootleg)
* @x: str to len
* Return: len
*/

int _strlen2(char *x)
{
	int count = 0;

	while (*(x + count))
	{
		count++;
	}
	return (count - 1);
}

/**
* print_rev - twin peaks it
* @s: the string
* Return: v0iddddddd
*/

void print_rev(char *s)
{
	int len = _strlen2(s);

	while (*(s + len))
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
