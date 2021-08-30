#include "search_algos.h"
#include <math.h>
/**
* jump_search - search for value using jump search.
* @array: array of integers.
* @size: size of array.
* @value: value of integer to search for.
* Return: index where value was found.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t x, jump = 0;

	if (size > 0)
	{
		while (array[jump] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
			jump += sqrt(size);
			if (jump >= size)
				break;
		}
		x = jump - sqrt(size) + 1;
		for (; x < size && x <= jump; x++)
		{
			printf("Value checked array [%lu] = [%d]\n", x, array[x]);
			if (array[x] == value)
				return (x);
		}
	}
	return (-1);
}
