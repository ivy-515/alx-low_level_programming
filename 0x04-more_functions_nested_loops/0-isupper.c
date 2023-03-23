#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: input character
 * Return: 1 if c is uppercase and 0 otherwise.
 */

int _isupper(int c)
{
	int value;

	for (c = 'a'; c <= 'z'; c++)
	{
		value = 0;
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		value = 1;
	}

	return (value);
}
