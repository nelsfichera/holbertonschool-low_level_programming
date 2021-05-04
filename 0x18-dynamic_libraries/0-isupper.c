#include "holberton.h"

/**
 * _isupper - checks if character is upper
 * @c: character
 * Return: 1 on success 0 on failure
 */

int _isupper(int c)
{
	int output, character;

	output = 0;
	for (character = 'A'; character <= 'Z'; character++)
		if (character == c)
			output = 1;
	return (output);
}
