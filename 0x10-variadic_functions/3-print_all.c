#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	char *str;
	int index = 0;
	char c;
	float f;
	int i;

	va_list args;

	va_start(args, format);

	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;

			default:
				break;
		}
		if (format[index + 1] != '\0' && (format[index] == 'c' || format[index] == 'i' || format[index] == 'f' || format[index] == 's'))
		{
			printf(", ");
		}

		index++;
	}
	printf("\n");
	va_end(args);
}
