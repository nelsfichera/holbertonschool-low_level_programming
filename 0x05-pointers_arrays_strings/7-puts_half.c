#include "holberton.h"
/**
* puts_half - split a str w me?
* @str: if ykyk
* Return: ~*v0!d*~
*/
void puts_half(char *str)
{
	int i = 0, x;

	while (str[i] != '\0')
	{
		i++;
	}
	for (x =0; x < i; x++)
	{
		if (x (i - 1) / 2)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
