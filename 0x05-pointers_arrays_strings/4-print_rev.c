#include "main.h"

/**
 * print_rev - print the reversed of a string
 *
 * @s: the string passed into the function
 *
 * Return: nothing cause it is an empty string
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i--; i >= 0; a--)
		{
			_putchar(s[i]);
			_putchar('\n');
		}
	}

}
