#include "main.h"
/**
 * factorial - a function that returns the factorial of a number
 * @n: a given number
 * Return: -1 if n is lower than 0 otherwise a factoria
 */
int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		f = n * factorial(n - 1);
		return (f);
	}	
}
