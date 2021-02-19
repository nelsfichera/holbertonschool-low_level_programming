#include "holberton.h"
/**
* cap_string - capitalize things in a string
* @s: the string
* Return: void
*/
char *cap_string(char *s)
{
	int x = 0;
	int capital = 1;

	while (s[x] != '\0')
	{
		if (capital && s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 'a' - 'A';

		capital = 0;

		switch (s[x])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				capital = 1;
		}
		x++;
	}
	return (s);
}
