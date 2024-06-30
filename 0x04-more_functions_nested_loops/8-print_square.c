#include "main.h"
/**
 * print_square - prints a square
 * @size: size of a square
 * Return: a square made of a character #
 */
void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
