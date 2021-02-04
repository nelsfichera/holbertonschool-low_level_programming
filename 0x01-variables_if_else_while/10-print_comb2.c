#include <stdio.h>
/**
* main - double digit count to 99 w comma
* Return: 0
*/
int main(void)
{
	int x = '0';
	int y = '0';

	for (x <= '9')
	{
		for (y <= '9')
		{
			putchar(x);
			putchar(y);
			if (x == '9' && y == '9')
			{
				continue;
			}
		else
		{
		putchar(',');
		putchar(' ');
		}
		y++;
		}
	x++;
	}
	putchar('\n');
	return (0);
}
