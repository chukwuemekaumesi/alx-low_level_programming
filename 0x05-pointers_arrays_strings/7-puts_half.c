#include "main.h"

/**
 * puts_half - getsthe half of the string and prints it
 *
 * @str: gets the tring, divides it length by 2
 *
 * Return: returns nothing because it the function is void
 *
 */

void puts_half(char *str)
{
	int i;

	int len;

	int half;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	half = (len - 1) / 2;

	for (i = (half + 1); i < len; i++)
	{
		_putchar(str[i]);
	}

}
