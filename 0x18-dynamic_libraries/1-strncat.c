#include "holberton.h"

/**
 * *_strncat - concatenates two strings but use at most n bytes
 * @dest: a string
 * @src: a string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int str_length = 0, x = 0;

	while (dest[x++])
		str_length++;
	for (x = 0; x < n && src[x]; x++)
		dest[str_length + x] = src[x];
	dest[str_length + x] = '\0';
	return (dest);
}
