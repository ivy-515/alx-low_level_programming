#include "main.h"
#include <stdio.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[j++] = s2[i];

	return (str);
}
