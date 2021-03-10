#include "3-calc.h"
/**
* main - user gives 2 ints and an op, and main will do the calc
* @argc: args counter
* @argv: args
* Return: void on success
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	/*valid8*/

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*convert & point to function*/

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	/*valid8*/

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	/*calc via func ptr*/
	printf("%d\n", f(num1, num2));

	return (0);
}
