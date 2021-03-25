#include "holberton.h"
/**
* flip_bits - flip the bits for n & m to be equivalent
* @n: number 1
* @m: number 2
* Return: bits 2 flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			bits++;
		m = m >> 1;
		n = n >> 1;
	}
	return (bits);
}
