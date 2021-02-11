#include "holberton.h"
/**
* _isdigit - is it number or not
* @c: c is a thing that i'm doing
* Return: 1 if yes 0 if no
*/
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
