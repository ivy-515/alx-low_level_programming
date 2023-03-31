#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * it will use at most n bytes from src
 * @dest: string
 * @src: string
 * @n: bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j] = src[i];

	return (dest);
}
