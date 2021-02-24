#include "holberton.h"
/**
* _sqrt_recursion - return the natural square root
* @n: the number
* Return: int
*/
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (n / _sqrt_recursion(n));
	else
		return (-1);
}
