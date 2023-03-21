#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Check main
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */

int print_last_digit(int)
{
	int i;
	int last_digit;

	if (i < 0)
		last_digit = (-i) % 10;

	else
		last_digit = i % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
