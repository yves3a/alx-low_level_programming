#include <3-calc.h>

/**
 * op_add -it adds the two numbers
 * @a: one number
 * @b: second number
 * Return: the the sum of two numbers.
 *	error otherwise.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - it calculates the diference btn a and b.
 * @a: first number
 * @b: second number
 * Return: the difference btn two number
 *	otherwise, prints error
 */

int op_sub(int a, int b)
{
	if (a > b)
		return (a - b);
	if (b > a)
		return (b -a);
}

/**
 * op_mul - it multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: the product of two numbers
 *	otherwise, prints error
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - it calculates the divition of a by b.
 * @a: first number
 * @b: second number
 * Return: the difference btn two number
 *	otherwise, prints error.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - it calculates the modular of two numbers
 * @a: first number
 * @b: second number
 * Return: the reminder of the division of the two numbers
 *	otherwise, prints error
 */

int op_mod(int a, int b);
{
	return (a % b);
}
