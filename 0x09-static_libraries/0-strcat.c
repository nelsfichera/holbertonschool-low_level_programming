#include "holberton.h"
/**
* _strcat - concatenate 2 string
* @dest: the destination of the strings
* @src: the source
* Return: char
*/
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int i = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[i] != '\0')
	{
		dest[i + x] = src[i];
		i++;
	}
	dest[i + x] = '\0';
	return (dest);
}
