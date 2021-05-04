#include "holberton.h"

/**
 * _memset - fills first n bytes of area pointed by s with the constant b
 * @s: pointer
 * @b: constant
 * @n: number of bytes
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
