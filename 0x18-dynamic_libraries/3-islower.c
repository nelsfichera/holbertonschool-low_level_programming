#include "holberton.h"

/**
 * _islower - checks if character is in lowercase
 * @c: char
 * Return: 1 on success, 0 on failure
 */

int _islower(int c)
{
	int letter;
	int result;

	result = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
			result = 1;
	}
	return (result);
}
