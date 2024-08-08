#include <unistd.h>

/**
 * _putchar - it writes a single to the std output.
 * @c: the character to be printed to std output.
 *
 * Return: 1 on success
 * On error, -1 is returned, and errno is set appropriately.
 */

char _putchar(char c)
{

	return (write(1, &c, 1));
}
