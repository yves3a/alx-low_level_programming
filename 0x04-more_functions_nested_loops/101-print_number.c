#include "main.h"
/**
 * print_number(int n) - a code that prints an integer
 * @n: an interger
 * Return: an integers
 */
int _putchar(char c);
void print_number(int n)
{
	unsigned int  n1 = 0;
	 if (n < 0)
    {
        n1 = -n;
        _putchar('-');
    }
    else
    {
        n1 = n;
    }

    if (n1 / 10)
    {
        print_number(n1 / 10);
    }

    _putchar('0' + (n1 % 10));
}
