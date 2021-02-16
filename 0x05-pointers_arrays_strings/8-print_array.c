#include "holberton.h"
#include <stdio.h>
/**
* print_array - print n of an array
* @a: str
* @n: num
* Return: v o i d
*/
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x == n - 1)
		{
			continue;
		}
		else
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
