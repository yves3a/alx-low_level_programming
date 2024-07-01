#include "main.h"
/**
 * _isalpha - a function that checks for alphabets
 * @c: interger representing a character
 * Return: 1 if c is alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);

}
