#include "holberton.h"
/**
* string_toupper - to upper
* @a: str
* Return: uppercase string
*/
char *string_toupper(char *a)
{
	int x = 0;

	while (a[x] != '\0')
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] = a[x] - 32;
		}
		x++;
	}
	return (a);
}
