#include <unistd.h>
#include "main.h"

/**
 * _islower - Check main
 * @c: An input character
 * _isalpha : check main
 * Description : check for alphabetic character.
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
