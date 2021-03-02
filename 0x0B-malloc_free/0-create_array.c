#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* *create_array - creates char array & initializes w/specific char
* @size: the size of array
* @c: specific char
* Return: the str
*/
char *create_array(unsigned int size, char c)
{
	char *str; /*the character array to return*/
	unsigned int x; /*for iteration*/

	if (size == 0)
		return (NULL);
	str = malloc((size) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
