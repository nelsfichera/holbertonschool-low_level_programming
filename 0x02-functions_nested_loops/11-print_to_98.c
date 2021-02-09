#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - num to 98
* @n: the num
* Return: void
*/
void print_to_98(int n)
{

	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
}
