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
		;
	}
	dest[i] = '\0';

	for (j = 0; j<n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i+j] = '\0';
	return (dest);
}
