#include "holberton.h"
/**
* reverse_array - rev the array
* @a: array
* @n: length
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int x = 0; /*buffer*/

	while (i < n / 2)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
		i++;
	}
}
