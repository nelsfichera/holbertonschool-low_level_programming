#include "holberton.h"
/**
* _isalpha - tell the stupid computer if it's a letter
* @c: the variable
* Return: 1 if true, 0 if false
*/
int _isalpha(int c)
{
	if (c <= 'z')
		return (1);
	else if (c <= 'Z')
		return (1);
	else
		return (0);
}
