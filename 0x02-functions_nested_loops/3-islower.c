#include "main.h"
#include <stdio.h>
/**
 * _islower - a function that checks for the lowercase character
 * @c: an interger
 * Return: 1 on success exection otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		printf("1");
	else
		printf("0");
}
