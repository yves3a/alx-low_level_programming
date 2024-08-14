#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - it prints numbers separated by separator
 * @separator: a string that separates the numbers
 * @n: number of integers passed
 * Return: numbers separated by separator.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d ", va_arg(numbers, int));
			printf("%s", separator);
		}
		else
			printf("%d ", va_arg(numbers, int));
	}
}
