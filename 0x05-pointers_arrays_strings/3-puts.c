#include "holberton.h"
/**
* _puts - puts but not
* @str: the string
* Return: v0!d
*/
void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
