#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: fixed parametre.
 * Return: If n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list arg;

	va_start(arg, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, unsigned int);

	va_end(arg);

	return (sum);
}
