#include "main.h"

/**
 * _puts - this prints a string followed by a new line
 *
 * @str: takes the string that should be printed
 *
 * Return: void
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
