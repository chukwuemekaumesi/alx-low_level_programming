#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print the integers between 0 and 9
 *
 * Return: return 0 if successful
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

int main(void)
{
	print_numbers();

	return (0);
}
