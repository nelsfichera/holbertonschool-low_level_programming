#include "holberton.h"
#define NULL 0
/**
* _strpbrk - search a string for any of a set of bytes
* @s: the string
* @accept: the set string
* Return: pointer to bytes in s which match accept, null if none
*/
char *_strpbrk(char *s, char *accept)
{
	int x; /*for iteration*/
	int y; /*for iteration*/

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (accept[y] == s[x])
			{
				return (&s[x]);
			}
		}
	}
	return (NULL);
}
