#include "main.h"

/**
 * print_binary - a function that prints
 * the binary representation of a number.
 * @n: the number to be printed in binary
 *
 * Return: converted number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i = 0;

	while (mask <= n)
	{
		mask <<= 1;
		i++;
	}
	if (i)
	{
		mask >>= 1;
	}
	while (mask)
	{
		if (n && mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
