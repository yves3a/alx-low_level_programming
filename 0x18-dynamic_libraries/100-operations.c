#include <stdio.h>

/**
 * This file contains a functions that will be called by the
 * python file.
 * This file will be used to create a library such it can be accessed
 * by the python programs throught it.
 */

int add(int x, int y)
{
	return (x + y);
}

int sub(int x, int y)
{
	return (x - y);
}

int mul(int x, int y)
{
	return (x * y);
}

int div(int x, int y)
{
	return (x / y);
}

int mod(int x, int y)
{
	return (x % y);
}
