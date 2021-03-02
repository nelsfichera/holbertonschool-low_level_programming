#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - return a pointer to a new copy of the str
* @str: the source
* Return: pointer to copy
*/
char *_strdup(char *str)
{
	int x; /*for iteration*/
	int n; /*the length*/
	char *copy; /*pointer to the copy*/

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
	{}

	n = x + 1;

	copy = malloc(sizeof(char) * n);

	if (copy != NULL)
	{
		for (x = 0; x < n; x++)
			copy[x] = str[x];
	}
	else
		return (NULL);
	return (copy);
}
