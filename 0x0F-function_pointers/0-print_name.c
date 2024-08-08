#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - it prints the name passed
 * @name: the name to be printed
 * @f: a pointer to a function that
 *		prints name.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);

}
