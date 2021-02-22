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
	int i; /*for iteration*/
	unsigned int len = 0; /*the length*/
	int match; /*flag for matching*/

	while (s[len])
	{
		for (i = 0; accept[i]; i++)
		{
			match = 0;
				if (s[len] == accept[i])
				{	
					match = 1;
					break;
				}	
		}
	if (!match)
		break;
		len++;
	}
	return (len);
}
