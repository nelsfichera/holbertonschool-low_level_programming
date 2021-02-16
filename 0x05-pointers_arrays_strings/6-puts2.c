#include "holberton.h"
/**
* puts2 - every other
* @str: the str
* Return: void
*/
void puts2(char *str)
{
	char *term = str;

	while (*term != '\0')
	{
		term++;
	}

	while (str < term)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
