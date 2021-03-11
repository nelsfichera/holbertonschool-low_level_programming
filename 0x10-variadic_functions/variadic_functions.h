#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void printchar(va_list arg);
void printint(va_list arg);
void printfloat(va_list arg);
void printstr(va_list arg);
void print_all(const char * const format, ...);
typedef struct print_s
{
	char letter;
	void(*f)();
} print_t;
#endif
