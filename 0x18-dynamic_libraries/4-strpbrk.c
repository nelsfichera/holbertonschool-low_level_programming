#include "holberton.h"
/**
 * _strpbrk - finds first occurance in string s of any byte
 * @s: string
 * @accept: string characters being checked for
 * Return: pointer to memory area s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
		if (_strchr(accept, *s++))
		{
			--s;
			return (s);
		}
	return (0);
}
