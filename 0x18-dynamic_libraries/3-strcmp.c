#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0')
	{
		if (s2[x] == '\0')
			return (s1[x]);
		if (s2[x] > s1[x])
			return (s1[x] - s2[x]);
		if (s2[x] < s1[x])
			return (s1[x] - s2[x]);
		x++;
	}
	if (s2[x] != '\0')
		return (0);
	return (0);
}
