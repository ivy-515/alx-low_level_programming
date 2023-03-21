#include <unistd.h>
#include "main.h"

/**
 * Description : prints 10 times the alphabet, in lowercase, followed by a new line.
 * main - Entry point
 * print_alphabet_x10 : check main
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char i;
	int j;
	
	for (j = 0; j < 10; j++)
	{
		for (i = a; i <= z; i++)
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
