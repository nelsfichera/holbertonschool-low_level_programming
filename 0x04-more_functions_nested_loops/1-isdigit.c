 #include "holberton.h"
 /**
 * _isdigit - is it number or not
 * @c: c is a thing that i'm doing
 * Return: 1 if yes 0 if no
 */

int _isdigit(char digit)
{

	if (digit >= '0' && digit <= '9')
		return (1);
	else
		return (0);
}
