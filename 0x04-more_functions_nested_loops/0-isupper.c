#include "main.h"

/**
 * _isupper - check if C is in uppercase
 * @c: character in the program
 *
 * Return: 0 0r 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
