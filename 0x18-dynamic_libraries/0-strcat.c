#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int str_length = 0, x = 0;

	while (dest[x++])
		str_length++;
	for (x = 0; src[x]; x++)
		dest[str_length + x] = src[x];
	dest[str_length + x] = '\0';
	return (dest);
}
