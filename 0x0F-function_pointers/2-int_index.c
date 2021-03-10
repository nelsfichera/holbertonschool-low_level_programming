#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: target array
* @size: size of the array
* @cmp: comparison function
* Return: on success, index of first matching element.
*	if size <0 or no matches, returns -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int res = 0;

	if (array && size && cmp)
		for (res = 0; res < size; res++)
		if (cmp(array[res]))
			return (res);

	return (-1);
}
