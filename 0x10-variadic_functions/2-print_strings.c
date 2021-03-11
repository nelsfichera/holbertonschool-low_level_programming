#include "variadic_functions.h"
/**
* print_strings - prints strings, partitioned w a separator
* followed by a new line
* @separator: the partition
* @n: number of args
* Return: v0!d
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist; /*list of args*/
	unsigned int x; /*for iteration*/
	char *s; /*pointer to char index*/

	/*intialize*/
	va_start(valist, n);

	/*iterate through the strings and print*/
	for (x = 0; x < n; x++)
	{
		s = va_arg(valist, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (x < (n - 1) && separator)
			printf("%s", separator);
	}

	/*print new line & deinitialize*/
	printf("\n");
	va_end(valist);
}
