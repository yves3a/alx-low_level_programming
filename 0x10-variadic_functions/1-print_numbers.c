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
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);

	printf("\n");
}
