#include "main.h"
/**
 * *_strncat - a function that concatenates two strings
 * @dest: to be concatenated with src
 * @src: to be transferred to dest
 * @n: at most bytes from src to go.
 * Return: dest when successfully
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	for (; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}
	for (j = 0; src[j] != n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
