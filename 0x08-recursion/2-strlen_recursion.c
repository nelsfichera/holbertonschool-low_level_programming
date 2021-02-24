#include "holberton.h"
/**
* _strlen_recursion - return the length of a string
* @s: pointer in the string
* Return: int
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
