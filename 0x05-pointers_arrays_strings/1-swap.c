#include "holberton.h"
/**
* swap_int - freaky friday
* @a: a
* @b: b
* Return: v0id
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
