#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - it adds up all parameters
 * @n: maximum number of parameters to be passed
 * Return: sum of all paramters.
 *		- returns 0 when n = 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	return (sum);
}
