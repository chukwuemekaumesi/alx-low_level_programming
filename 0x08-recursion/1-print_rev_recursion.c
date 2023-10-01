#include "main.h"

/**
 * _print_rev_recursion - print strings in reverse
 * @s: the string to be taken
 * Return: the string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else 
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}

}
