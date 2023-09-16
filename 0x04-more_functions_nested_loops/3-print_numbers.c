#include "main.h"

/**
 * print_numbers - print the integers between 0 and 9
 *
 * Return: return 0 if successful
 */

int print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
