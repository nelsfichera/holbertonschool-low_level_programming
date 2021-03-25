#include "holberton.h"
/**
* binary_to_uint - converts binary to an unsigned integer
* @b: str of 1s and 0s.
* Return: dec. val.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, dec = 0, base = 1;
	int x;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	for (x = len - 1; x >= 0; x--)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		if (b[x] == '1')
			dec += base;
		base = base * 2;
	}
	return (dec);
}
