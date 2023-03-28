#include "main.h"
#include <stdio.h>

/**
 * rev_string - returns the length of a given string
 * @s: string to check the length of
 * Return: viod
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char k;

	while (s[j++])
		i++;

	for (j = i - 1; j >= i / 2; j--)
	{
		k = s[j];
		s[k] = s[i - j - 1];
		s[i - j - 1] = k;
	}
}
