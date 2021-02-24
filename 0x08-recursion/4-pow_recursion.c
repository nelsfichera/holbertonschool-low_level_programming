#include "holberton.h"
/**
* _pow_recursion - return the value of x to the power of y
* @x: the integer
* @y: the exponent
* Return: int
*/
int _pow_recursion(int x, int y)
{
	if (x >= 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
