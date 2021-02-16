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
	int y = 0;

	while (x != '\0')
	{
		y = *(a + x);
		if (x == n - 1)
			printf("%d\n", y);
		else
			printf("%d, ", y);
		x++;
	}
}
