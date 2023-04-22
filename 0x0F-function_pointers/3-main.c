#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: count
 * @argv: array
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int num1, num2, res;
	int (*opp)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	opp = get_op_func(operator);

	if (opp == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = opp(num1, num2);

	printf("%d\n", res);

	return (0);
}
