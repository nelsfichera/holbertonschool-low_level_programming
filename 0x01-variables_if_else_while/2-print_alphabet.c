#include <stdio.h>
#include <ctype.h>
/**
* main - print alphabet w/new line but don't use printf bc we don't like fun
* Return: 0
*/
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
		putchar('\n');
		return (0);
}
