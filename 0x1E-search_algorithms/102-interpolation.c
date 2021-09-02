#include "search_algos.h"
/**
* interpolation_search - search for value using interpolation search.
* @array: array of integers.
* @size: size of array.
* @value: value of integer to search for.
* Return: index where value was found.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, low = 0, top = size - 1;

	if (size > 0 && array)
	{
		while ((array[top] != array[low]) && (value >= array[low]))
		{
			x = low + (((double)(top - low) / (array[top] - array[low]))
				* (value - array[low]));
			if (x > top)
			{
				printf("Value checked array[%lu] is out of range\n", x);
				return (-1);
			}
			printf("Value checked array[%lu] = [%d]\n", x, array[x]);
			if (array[x] < value)
				low = x + 1;
			else if (value < array[x])
				top = x - 1;
			else
				return (x);
		}
		if (value == array[low])
			return (low);
	}
	return (-1);
}
