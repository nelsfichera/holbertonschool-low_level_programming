#include "holberton.h"
/**
* rev_string - reverse a string
* @s: the str
* Return: void
*/
void rev_string(char *s)
{
	int x;
	int len;
	int temp = 0;

	for (len = 0; s[len] != 0; len++)
	{
		continue;
	}
	for (x = 0; x < len / 2; x++)
	{
		temp = s[x];
		s[x] = s[len - 1 - x];
		s[len - 1 - x] = temp;
	}
}
