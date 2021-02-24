#include "holberton.h"
/**
* _print_rev_recursion - print a string in reverse
* @s: pointer in a string
* Return: v0id
*/
void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s++);
		_putchar(*--s);
}
