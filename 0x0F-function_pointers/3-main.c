#include "3-calc.h"

/**
 * main - perfroms simple operations.
 * @argc: count
 * @argv: array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*opp)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	opp = get_op_func(argv[2]);

	if (!opp)
	{
		printf("Error\n");
		exit(99);
	}
	res = opp(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
