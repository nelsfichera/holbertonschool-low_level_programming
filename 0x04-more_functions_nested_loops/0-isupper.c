#include "holberton.h"
/**
* _isupper - is it up or not
* @c: c is a thing that i'm doing
* Return: 1 if yes 0 if no
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
