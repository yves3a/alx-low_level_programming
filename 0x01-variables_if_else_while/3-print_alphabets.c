#include <stdio.h>

/**
 * main - A program that will print lower alphabet followed by capital ones
 * Return: 0 (Sucess)
 */

int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';

	while (c <= 'z')
		{
		putchar(c);
		c++;
		}
	while (d <= 'Z')
		{
		putchar(d);
		d++;
		}
	putchar('\n');
	return (0);

}
