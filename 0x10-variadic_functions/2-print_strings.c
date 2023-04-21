#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed
 * @n: the number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	char *str;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("nil");

		else
			printf("%s", str);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
