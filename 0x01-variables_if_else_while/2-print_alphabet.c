#include <stdio.h>
/**
* main - print alpha
* Return: 0
*/
int main(void)
{
	int x; 
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
		getch();
	}
		return (0);
}
