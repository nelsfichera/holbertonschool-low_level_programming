#include "holberton.h"
/**
* print_last_digit - print last digit
* @n: the number
* Return: digit
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		_putchar(-last_digit);
		return (-last_digit);
	}
	_putchar(last_digit);
	return (last_digit);
}
