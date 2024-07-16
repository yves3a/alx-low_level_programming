#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: a string to be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')

	{
		return;
	}

	else
	{
		_print_rev_recursion(++s);

		_putchar(*s);
	}
}
/**
 * print_rev_with_newline - wrapper function to print
 * string in reverse followed by a newline
 * @s: a string to be reversed
 * Return: void
 */
void print_rev_with_newline(char *s)
{
	_print_rev_recursion(s);
	_putchar('\n');
}
