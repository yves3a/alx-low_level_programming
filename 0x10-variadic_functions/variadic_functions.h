#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */

#include <stdarg.h>

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;


#endif
