#include <stdio.h>
/**
* main - print 0-9
* Return: 0
*/
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d",x);
		x++;
	}
	putchar('\n');
	return (0);
}
