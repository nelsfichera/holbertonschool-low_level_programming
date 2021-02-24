#include "holberton.h"
/**
* _puts_recursion - print a string and a new line
* @s: points in a string
* Return: v0id
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
