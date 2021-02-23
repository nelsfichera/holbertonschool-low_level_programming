#include "holberton.h"
#define NULL 0
/**
* _strspn - gets the length of a prefix substring
* @s: the segment
* @accept: bytes from prefix
* Return: len
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0; /*for iteration*/
	unsigned int n = 0; /*for iteration*/

	for (x = 0; s[x] != '\0'; x++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[x] == accept[n])
				break;
		}
		if (accept [y] == '\0')
			break;
	}
	return (x);
}
