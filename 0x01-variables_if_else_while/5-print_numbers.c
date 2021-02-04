#include <stdio.h>
/**
* main - print 0-9
* Return: 0
*/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
