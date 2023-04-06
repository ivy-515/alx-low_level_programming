#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: integer.
 * Return: -1 if n is lower than 0
 *	1 if n = 0
 *	else the factorial of the given number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
