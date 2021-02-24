#include "holberton.h"
/**
* factorial - reutn the factorial of a given number
* @n: the number 
* Return: int
*/
int factorial (int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (n * factorial (n - 1));
}
