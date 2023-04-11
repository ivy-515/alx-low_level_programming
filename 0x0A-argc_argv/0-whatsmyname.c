#include <stdio.h>

/**
* main - a program that prints its name,
* followed by a new line.
* @argc: an integer variable that stores
* the number of command-line arguments
* @argv: an array of character pointers
* Return: 0
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
