#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocate mem for array and sets val to 0
* @nmemb: number of elements
* @size: bytes per element
* Return: pointer to allocated mem
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr; /*array*/
	unsigned int x; /*for iteration*/

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr)
	{
		for (x = 0; x < (nmemb * size); x++)
			arr[x] = 0;
	}
	return (arr);
}
