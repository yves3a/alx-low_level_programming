#include "main.h"
/**
 * _puts_recursion - a function that prints a string.
 * @s: a string to be made
 * Return: 0 for the succesful execution.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
