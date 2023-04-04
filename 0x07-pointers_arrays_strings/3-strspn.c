#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @accept: character
 * Return: b
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, b = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
		s++;
	}

	return (b);
}
