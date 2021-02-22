#include "holberton.h"
#define NULL 0
/**
* _strstr - locates a substring
* @haystack: the string
* @needle: the substring
* Return: pointer to the beginning of located substring, null if not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *a; /*for iteration*/
	char *b; /*for iteration*/

	b = needle;

	if (*b == 0)
	{
		return ((char *) haystack);
	}

	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}

		a = haystack;

		while (1)
		{
			if (*b == 0)
			{
				return ((char *) haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		return (needle);
	}
	return (NULL);
}
