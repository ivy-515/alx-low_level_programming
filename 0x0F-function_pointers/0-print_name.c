#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  a function that prints a name.
 * @name: the name of type char
 * @f: pointer to a callback function.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
