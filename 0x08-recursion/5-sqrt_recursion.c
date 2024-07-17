#include "main.h"
/**
 * _sqrt_recursion - a function that returns a square root of a number
 * @n: a number to be square rooted
 * Return: The natural square root, or _1 if has no natural square root
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
 * sqrt_finder _ a helper function to find the natural square root of n
 * @n: a number to find the square root of
 * @root: the current number to test as the potential square root
 * Return: the natural square root of n, or -1 if n has no natural square root
 */
int sqrt_finder(int n, int root)
{
	if ((root * root) == n)
		return (root);
	if ((root * root) > n)
		return (-1);
	return (sqrt_finder(n, root + 1));

}
