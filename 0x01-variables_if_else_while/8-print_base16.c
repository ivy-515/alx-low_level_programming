#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 16; i++)
		putchar (i + '0');

	for (j = 'a'; j <= 'f'; j++)
		putchar (i);

	putchar ('\n');

	return (0);
}
