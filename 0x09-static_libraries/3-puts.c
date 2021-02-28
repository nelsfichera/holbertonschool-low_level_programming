#include "holberton.h"
/**
* _puts - puts but not
* @str: the string
* Return: v0!d
 */
void _puts(char *str)
{
	int count = 0;

	while (*(str + count))
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
