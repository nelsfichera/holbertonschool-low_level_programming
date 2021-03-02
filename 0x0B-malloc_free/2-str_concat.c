#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - concatenate 2 strings
* @s1: string 1
* @s2: string 2
* Return: the kitty
*/
char *str_concat(char *s1, char *s2)
{
	char *kitty; /*the concatenated string*/
	int size1 = 0; /*length of first*/
	int size2 = 0; /*length of second*/
	int x; /*for iteration*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	kitty = malloc((size1 + size2 + 1) * sizeof(char));
	if (kitty == NULL)
		return (NULL);

	for (x = 0; x <= size1; x++)
	{
		kitty[x] = s1[x];
	}

	for (; x <= (size1 + size2); x++)
	{
		kitty[x] = s2[x - size1];
	}
	kitty[x] = '\0';
	return (kitty);
}
