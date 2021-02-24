#include "holberton.h"
/**
* prime2prime - checks for prime
* @n: number
* @x: number 2
* Return: 1 or 0, true or false, prime or not
*/
int prime2prime(int n, int x)
{
	if (n % x == 0)
		return (0);
	if (x > n / 2)
		return (1);
	return (prime2primse(n, x + 1));
}

/**
* is_prime_number - is it prime or not?
* @n: the number 
* Return: int
*/
int is_prime_number(int n)
{
	int x = 2;
	int result;

	if (n < 2)
		return (0);
	result = prime2prime(n,x);
	return (result);
}
}
