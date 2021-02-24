#include "holberton.h"
/**
* _sqrthelp - calculate the natural sqrt
* @x: the number
* @n: iteration
* Return: result
*/
int _sqrthelp(int x, int n)
{
	if (n * n == x)
	{
		return (n);
	}
	if (n * n > x)
	{
		return (-1);
	}
	return (_sqrthelp(x, n + 1));
}
/**
* _sqrt_recursion - return the natural square root
* @n: the number
* Return: int
*/
int _sqrt_recursion(int n)
{
	return (_sqrthelp(n, 1));
}
