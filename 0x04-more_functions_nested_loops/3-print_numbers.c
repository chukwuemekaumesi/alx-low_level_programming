#include "main.h"

/**
 * print_numbers - print the integers between 0 and 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

int main(void)
{
	print_numbers();

	return (0);
}
