#include "holberton.h"
/**
 * _strspn - gets length of prefix substring
 * @s: string
 * @accept: string with characters being checked for
 * Return: pointer to memory area s
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, n, num = 0, prev = -1;

	for (x = 0; s[x] && num != prev; x++)
	{
		for (n = 0; *(accept + n); n++)
			if (s[x] == accept[n])
				num++;
		prev++;
	}
		return (num);
}
