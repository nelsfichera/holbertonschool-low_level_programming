#include "holberton.h"
/**
* _memcpy - copies memory area
* @n: bytes from memory
* @src: origin
* @dest: destination
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x; /* for iteration */

	for (x = 0; x != '\0' ; x++)
	{
		dest[n] = src[n];
	}
	return (&dest[n]);
}
