#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of a number
 * @num: number
 * @root: the root
 * Return: check code
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: a number
 * Return: -1 If n does not have a natural square root
 *	else the natural square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
