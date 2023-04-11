#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two numbers.
 * @argc: int
 * @argv: array
 * Return: 1 if the program does not receive two arguments
 *		else return 0
 */

int main(int argc, char **argv)
{
	int i, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	i = a * b;
	printf("%d\n", i);

	return (0);
}
