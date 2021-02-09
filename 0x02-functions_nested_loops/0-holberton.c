#include "holberton.h"
/**
* main - putchar but _putchar
* Return: 0
*/

int main(void)
{
	int i;
	char *text = "Holberton\n";

	for (i = 0; i < 10; i++)
	{
		_putchar(*(text + i));
	}
	return (0);
}
