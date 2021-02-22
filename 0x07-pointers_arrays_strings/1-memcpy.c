include "holberton.h"
/**
* _memcpy - copies memory area
* @n: bytes from memory
* @src: origin 
* @dest: destination
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (n = 0; n != (void *)0; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
