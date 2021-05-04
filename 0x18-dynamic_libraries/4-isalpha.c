#include "holberton.h"
/**
 * _isalpha - checks if character is in alphabet
 * @c: the character being checked
 * Return: 1 on success, 0 on failure
 */

int _isalpha(int c)
{
	int letter;
	int result;

	result = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
			result = 1;
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (c == letter)
			result = 1;
	}
	return (result);
}
