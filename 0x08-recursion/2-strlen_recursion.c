#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: a string
 * Return: the length of the  string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == 0)
	{
		return (0);
	}
	else
	{
		len++;
		len += _strlen_recursion(s + 1);
		return (len);
	}
}
