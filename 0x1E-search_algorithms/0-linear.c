#include "search_algos.h"
/**
 * linear_search - use linear search to find value in array
 * @array: array of integers.
 * @size: size of array.
 * @value: value of integer to search for.
 * Return: index where value was found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array)
		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);
			if (array[index] == value)
				return (index);
		}
	return (-1);
}
