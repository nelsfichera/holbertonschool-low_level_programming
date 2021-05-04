#include "holberton.h"
/**
 * _puts - outputs string
 * @str: str
 * Return: strlen
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
