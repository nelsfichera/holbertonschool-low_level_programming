#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring
* @s: the segment
* @accept: bytes from prefix
* Return: accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i; /*for iteration*/
	unsigned int j; /*for iteration*/

	for (i = 0; accept[x] != '0' i++)
	{
		for (j = 0; s[j] != '0'; j++)
		{
			if (s[j] == accept[i])
			{
				return (j);
			}
		}
	}
	return (NULL);
}