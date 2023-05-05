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
	unsigned long int mask = 1ul << (sizeof(unsigned long int) * 8 - 1);
	int count = 0;
	int zeros = 1;

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (!zeros)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			zeros = 0;
		}
		mask >>= 1;
		count++;
	}

	if (count == 0 || zeros)
		_putchar('0');
}
