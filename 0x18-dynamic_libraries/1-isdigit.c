#include "holberton.h"

/**
 * _isdigit - checks if char is a digit 0-9
 * @c: number
 * Return: 1 on success 0 on failure
 */

int _isdigit(int c)
{
	int output, number;

	output = 0;
	for (number = '0'; number <= '9'; number++)
		if (number == c)
			output = 1;
	return (output);
}
