#include "variadic_functions.h"
/**
* printchar - prints a char
* @arg: the argument to print
*/
void printchar(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
* printint - prints an int
* @arg: the argument to print
*/
void printint(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
* printfloat - prints float
* @arg: the argument to print
*/
void printfloat(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
* printstr - prints str
* @arg: the argument to print
*/
void printstr(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
* print_all - prints any kind of data
* @format: formatting string
*/
void print_all(const char * const format, ...)
{
	char *separator = "";
	unsigned int x = 0, n = 0;
	va_list valist;

	print_t function[] = {
		{'c', printchar},
		{'i', printint},
		{'f', printfloat},
		{'s', printstr},
		{'\0', NULL}
	};

	va_start(valist, format);
	while (format && format[x] != '\0')
	{
		while (function[n].letter != '\0')
		{
			if (format[x] == function[n].letter)
			{
				printf("%s", separator);
				function[n].f(valist);
				separator = ", ";
			}
			n++;
		}
		n = 0;
		x++;
	}
	printf("\n");
	va_end(valist);
}
