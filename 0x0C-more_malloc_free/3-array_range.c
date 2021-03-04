#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - create an array of ints
* @min: start
* @max: end
* Return: pointer to array on success/null on fail
*/
int *array_range(int min, int max)
{
	int *arr = 0; /*the array*/
	int size = 0; /*the total size*/
	int x = 0; /*for iteration*/

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		arr[x] = min;
		min++;
	}
	return (arr);
}
