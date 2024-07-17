#include "main.h"
/**
 * _pow_recursion - a function to return the value of x as a power of y
 * @x: a number to raised by a power of x
 * @y: power of x
 * Return: x when successfully otherwise -1
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);


	return (x *  _pow_recursion(x, --y));

}
