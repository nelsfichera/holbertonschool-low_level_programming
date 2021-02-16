#include "holberton.h"
/**
* _strlen2 - strlen the remix (bootleg)
* @x: str to len 
* Return: len
*/

int _strlen2(char *x);
{
	int = count;

	while(*(x + count))
	{
		count++;
	}
	return (count - 1);
}

/**
  3 * print_rev - twin peaks it
  4 * @s: the string 
  5 * Return: v0iddddddd
  6 */

void print_rev(char *s)
{
	int len = _strlen2(s);

	while(*(s + len))
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
