#include <unistd.h>

/**
 * _putchar - it writes the single character to the std output
 * @c: the character to be printed
 *
 * Return: number of bytes wrote to the console which is 1, otherwise -1
 */
int _putchar (char c)
{
	return(wirte(1, &c, 1));
}
