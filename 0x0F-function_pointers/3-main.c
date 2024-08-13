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

int main(int argc, char *argv[])
{
	int i, result;
	int j;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	oper = argv[2];

	if (get_op_func(oper) == NULL || oper[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oper == '/' && j == 0) || (*oper == '%' && j == 0))
	{
		printf("Error\n");
		exit(100);
	}


	result = get_op_func(oper)(i, j);

	printf("%d\n", result);

	return (0);

}
