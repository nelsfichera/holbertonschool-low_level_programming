#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - concat two strings, up to n characters in s2
* @s1: string 1
* @s2: string 2
* @n: bytes of s2 to include
* Return: concat str
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *purr; /*concat str*/
	unsigned int x = 0; /*for iteration*/
	unsigned int index1 = 0; /*counting s1*/
	unsigned int index2 = 0; /*counting s2*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[index1] != '\0')
		index1++;
	while (s2[index2] != '\0')
		index2++;
	if (n < index2)
		index2 = n;

	purr = malloc((index1 + index2 + 1) * sizeof(char));

	if (purr == NULL)
		return (NULL);

	for (x = 0; x < index1; x++)
		purr[x] = s1[x];
	for (; x < (index1 + index2); x++)
		purr[x] = s2[x - index1];
	purr[x] = '\0';
	return (purr);
}
