#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - it operates the operation
 * @argc: number of arguments
 * @argv: arguments passed by user.
 * Return: the result of operation followe by new line.
 *
 */

int main (int argc, char *argv)
{
	int i, result;
	int j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != '+' || argv[2] !='-' || argv[2] != '%' || argv[2] != '*' || '/')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[1] == '/' || argv[1] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	result = get_op_func(argv[2]);

	printf("%d\n", result);

}
