#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: an interger representing numbers
 * Return: 1 if + sign, 0 if n is zero, -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
