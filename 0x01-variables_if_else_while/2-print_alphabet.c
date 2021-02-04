#include <stdio.h>
/**
* main - print alphabet w/new line but don't use printf bc we don't like fun
* Return: 0
*/
int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
		putchar('\n');
		return (0);
}
