#include <stdio.h>
/**
* main - fizzbuzz
* Return: 0
*/
int main(void)
{
	int x;

	for (x = 1; i < 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", x);
		}
	}
	printf("Buzz\n");
	return (0);
}
