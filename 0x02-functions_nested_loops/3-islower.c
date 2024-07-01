#include "main.h"
#include <stdio.h>
/**
 * _islower - a function that checks for the lowercase character
 * @c: an interger
 * Return: 1 on success exection otherwise 0
 */
int _islower(int c)
{
	char i;

	i = 'a';
	for (i <= 'z'; i++)
	{
		if (i == 'c')
			printf("1");
		else
			printf("0");
	}
}
