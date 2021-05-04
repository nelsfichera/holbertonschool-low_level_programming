#include "holberton.h"

/**
 * *_strncpy - copies a string upto to  n bytes
 * @dest: str
 * @src: str
 * @n: num bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	for (x = 0; x < n && src[x]; x++)
		dest[x] = src[x];
	for ( ; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
