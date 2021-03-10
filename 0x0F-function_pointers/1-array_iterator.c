#include "function_pointers.h"
/**
* array_iterator - execute function given as a parameter on elements of arrays
* @array: the array
* @size: the size of the array
* @action: function performed
* Return: v0!d
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action && size)
		for (x = 0; x < size; x++)
			(*action)(array[x]);
}
