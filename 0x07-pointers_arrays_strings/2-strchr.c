#include "holberton.h"
/**
* _strchr - locate a character in a string
* @s: the string
* @c: the char
* Return: first occurrence of c, null if not found
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (c);
		}
			return (NULL);
	} while (*s++);
}
