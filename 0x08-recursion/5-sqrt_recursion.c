#include "main.h"
/**
 * _sqrt_recursion - a function that returns a square root of a number
 * @n: a number to be square rooted
 * Return: a square roor
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	return (sqrt_finder(n, root));
}
/**
 * sqrt_finder _ a function to find the root of n
 * @n: a number
 * @root: a root 
 * Return: the natural square root of a fiven number
 * 	    if the number has no square root it returns -1
 */
int sqrt_finder(int n, int root)
{

	if (root == (n /2))
		return (-1);
	if ((root * root) == n)
		return (root);
	return (sqrt_finder(n, root +1));

}
