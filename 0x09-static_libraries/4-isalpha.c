#include "holberton.h"
/**
* _isalpha - tell the stupid computer if it's a letter
* @c: the variable
* Return: 1 if true, 0 if false
*/
int _isalpha(int c)
{
	int x = 0;

	if ((c >= 'a' && c <= 'z') || (c > 'A' && c < 'Z'))
		x = 1;

	return (x);
}
