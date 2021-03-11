#include "variadic_functions.h"
/**
* sum_them_all - return sum of unknown # of args
* @n: ints to sum
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist; /*the list*/
	unsigned int sum = 0; /*the value to return*/
	unsigned int x; /*for iteration*/

	/*valid8, initialize macro*/
	if (n == 0)
		return (0);

	va_start(valist, n);

	/*iterate, calc sum, deinitialize*/
	for (x = 0; x < n; x++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
