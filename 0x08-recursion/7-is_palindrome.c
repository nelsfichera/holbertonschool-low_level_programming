#include "holberton.h"
/**
* _strlen_recurs - do the strlen w no loops, just recurse
* @s: the str
* Return: length
*/
int _strlen_recurs(char *s)
{
	if (*s++)
		return (1 + _strlen_recurs(s));
	else
		return (0);
}

/**
* palindromer - is it a palindrome or not
* @s: string
* @start: start
* @end: end
* Return: 1 if palindrome, 0 if not
*/

int palindromer(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	else
		return (palindromer(s, start + 1, end - 1));
}

/**
* is_palindrome - is it a palindrome, w a lil help
* @s: the string
* Return: 1 if true, 0 if not
*/
int is_palindrome(char *s)
{
	int term;

	term = _strlen_recurs(s);
	if (term == 0)
		return (1);
	return (palindromer(s, 0, term - 1));
}
