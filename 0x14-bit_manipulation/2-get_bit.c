#include "main.h"

/**
 * get_bit - a function that returns
 * the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: The bit
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get;

	if (index > 64)
		return (-1);

	get = n >> index;

	return (get & 1);
}
