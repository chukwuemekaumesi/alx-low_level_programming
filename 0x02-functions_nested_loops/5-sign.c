#include "main.h"

/**
 * print_sign - Print + and returns 1 if n is greater 0
 * prints and returns 0 if n is equal to zero
 * prints - if n is less than 0
 *
 * @n: the integer
 *
 * Return: 1 if n is more than 0 and returns 0 if n is equal to 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
