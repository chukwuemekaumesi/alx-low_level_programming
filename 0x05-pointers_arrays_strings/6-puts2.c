#include "main.h"

/**
 * puts2 - takes strings and skips per letter
 *
 * @str: the string it accepts
 *
 * Return: returns nothing cause the function is void
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (1 % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
