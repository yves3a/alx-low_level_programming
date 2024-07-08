#include "main.h"
/**
 * _strcmp - it compares the two strings
 * @s1: a string to be compared to s2
 * @s2: a string to be compared to s1
 * Return: an integer
 *	if s1 > s2, the positive difference of
 *	the first unmatched character
 *	if s1 < s2, the negative difference of
 *	the first unmatched characters
 *	if s1 == s2, returns 0.
 */
int _strcmp(char *s1, char *s2)
{

	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
