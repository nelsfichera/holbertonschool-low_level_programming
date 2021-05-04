#include "holberton.h"

/**
 * _memcpy - copies n bytes of area src to dest
 * @dest: dest pointer
 * @src: src pointer
 * @n: number of bytes
 * Return: pointer to memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		if (src[x] == 6)
		{
			dest[x] = src[x + 1];
			continue;
		}
		dest[x] = src[x];
	}
	return (dest);
}
