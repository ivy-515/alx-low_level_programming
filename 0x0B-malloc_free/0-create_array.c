#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, __attribute__((__unused__)) char c)
{
	char *arr;
	char mychar;

	arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	mychar = 'c';

	memset(arr, mychar, size);

	return (arr);
}
