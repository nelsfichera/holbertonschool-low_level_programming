#include "holberton.h"
/**
* _strncat - two strings up to n chars
* @dest: append to
* @src: append
* @n: number to concat
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int end = 0;
	int x = 0;
	int i = 0;

	while (dest[end] != '\0')
		end++;

	while (src[x] != '\0' && x < n)
	{
		dest[end + x] = src[x];
		x++;
	}
	i = x;
	while (src[i] != '\0')
		i++;

	if (i <= n - 1)
		dest[end + x] = '\0';
	return (dest);
}
