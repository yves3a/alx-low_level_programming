#include "main.h"

/**
 * _putchar - it writes a single character to a std out put.
 * @c: a character to be written.
 * 
 * Return: 1 on success.. otherwise -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
