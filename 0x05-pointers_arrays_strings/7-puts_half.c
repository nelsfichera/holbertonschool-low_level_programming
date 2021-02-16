#include "holberton.h"
/**
* puts_half - split a str w me?
* @str: if ykyk
* Return: ~*v0!d*~
*/
void puts_half(char *str)
{
	int len;
	char *term = str;
	char *imp = str;
	char *hump;

	while (*term != '\0')
	{
		term++;
	}

	len = (term - imp);
	hump = imp + len / 2;

	while (hump < term)
	{
		_putchar(*hump);
		hump++;
	}
	_putchar('\n');
}
