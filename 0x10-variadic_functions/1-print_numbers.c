#include "variadic_functions.h"
/**
* print_numbers - print list of numbers, followed by a new line
* @separator: partition between each printed number
* @n: number of args
* Return: v0!d
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist; /*list of args*/
	unsigned int x; /*for iteration*/

	/*initialize*/
	va_start(valist, n);

	/*iterate and print*/
	for (x = 0; x < n; x++)
	{
		printf("%i", va_arg(valist, int));
		if (x < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	/*deinitialize*/
		va_end(valist);
}
