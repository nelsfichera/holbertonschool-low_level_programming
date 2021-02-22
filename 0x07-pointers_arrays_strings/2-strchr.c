#include "holberton.h"
#define NULL 0
/**
* _strchr - locate a character in a string
* @s: the string
* @c: the char
* Return: first occurrence of c, null if not found
*/
char *_strchr(char *s, char c)
{
	int x = 0; /*for iteration*/

	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	return (NULL);
}
