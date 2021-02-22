#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals
* in a square matrix of integers
* @a: pointer to diag
* @size: how big
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i <= (size * size); i += (size + 1))
	{
		sum1 += a[i];
	}
	for (i = (size - 1); i <= ((size - 1) * size); i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
