#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments passed to it
 * @argc: number of arguments
 * @argv: an array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
