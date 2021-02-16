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
	int x = 0;

	while (x < n)
	{
		if (x == n - 1)
			printf("%d", a[x]);
		else
			printf("%d, ", a[x]);
		x++;
	}
	putchar('\n');
}
