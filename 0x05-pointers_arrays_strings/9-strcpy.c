#include "holberton.h"
/**
* _strcpy - do strcpy but not
* @dest: destination
* @src: copies dest's dest
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int len;
	int x;

	for (len = 0; src[len] != 0; len++)
	{
		continue;
	}
	for (x = 0; x <= len; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
