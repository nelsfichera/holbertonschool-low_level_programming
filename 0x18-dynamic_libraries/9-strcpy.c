#include "holberton.h"
/**
 * *_strcpy - copys a string into dest
 * @dest: copy string
 * @src: og string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != 0; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
