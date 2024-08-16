#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything passed to it.
 * @format: data type format of arguments
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str;
	char c;
	float f;
	int index = 0;

	va_list list;

	va_start(list, format);
	while (format && format[index])
	{
		switch (format[index])
		{
			case 'i':
				i = va_arg(list, int);
				printf("%d", i);
				break;
			case 'c':
				c = (char)va_arg(list, int);
				printf("%c", c);
				break;
			case 'f':
				f = va_arg(list, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(list, char *);
				if (str != NULL)
				{
					printf("%s", str);
				}
				else
					printf("(nil)");
				break;
		}
		if (format[index + 1] != '\0' && (format[index] == 's' || format[index] == 'c' || format[index] == 'f' || format[index] == 'i'))
		{
			printf(", ");
		}
		index++;
	}
	va_end(list);
	printf("\n");
}
