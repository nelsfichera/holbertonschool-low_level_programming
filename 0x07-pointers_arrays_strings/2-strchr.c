#include "holberton.h"
/**
* _strchr - locate a character in a string
* @s: the string
* @c: the char
* Return: first occurrence of c, null if not found
*/
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return c;
		else
			return NULL;
		}
	}
}
