#include "holberton.h"
/**
* _islower - is it lower or not
* Return: 1 if yes 0 if no
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
