#include "main.h"

/**
 * _puts_recursion - prints a recursive string
 * @s: the string taken into the function
 * Return: Nothing since it's void
 */

void _puts_recursion(char *s)
{
	if (s =! '\0')
	{
		_putchar('\n');
	}

	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}

}
