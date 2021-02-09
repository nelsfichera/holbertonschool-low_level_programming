#include "holberton.h"
/**
* _abs - absolute value
* @x: the number
* Return: absval
*/
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	return (x);
}
