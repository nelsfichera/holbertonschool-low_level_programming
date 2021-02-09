#include "holberton.h"
/**
* _islower - is it lower or not
* @c: c is a thing that i'm doing
* Return: 1 if yes 0 if no
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
