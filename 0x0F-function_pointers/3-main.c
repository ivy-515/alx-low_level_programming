#include "3-calc.h"

/**
 * main - perfroms simple operations.
 * @argc: count
 * @argv: array
 *
 * Return: Always 0 (Success)
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

	if (!opp)
	{
		printf("Error\n");
		exit(99);
	}

	res = opp(num1, num2);

	printf("%d\n", res);

	return (0);
}
