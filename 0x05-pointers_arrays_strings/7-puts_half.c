#include "holberton.h"
/**
* puts_half - split a str w me?
* @str: if ykyk
* Return: ~*v0!d*~
*/
void puts_half(char *str)
{
	int len;
	int x;

	for (len = 0; str[len] != 0; len++)
	{
		continue;
	}
	if (len % 2 == 0)
	{
		for (x = len / 2; x <= len; x++)
		{
			_putchar(str[x]);
		}
	}
	else
	{
		for (x = (len - 1) / 2; x <= len; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
