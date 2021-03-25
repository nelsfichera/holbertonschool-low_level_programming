#include "holberton.h"
/**
* set_bit - set the value of a bit at index to 1
* @index: the location of the bit to change
* @n: number
* Return: 1 on sucess, -1 on failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	aux <<= index, *n |= aux;
	return (1);
}
