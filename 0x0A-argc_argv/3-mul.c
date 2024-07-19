#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two arguments
 * @argc: number of arguments
 * @argv: an array
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);

	return (0);
}
