#include "main.h"

/**
 * _isalpha - shows 1 if the input is a
 * Letter another cases, shows 0
 *
 * @c: The characterin ASCII code
 *
 *Return: 1 for the letters. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
			(c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
