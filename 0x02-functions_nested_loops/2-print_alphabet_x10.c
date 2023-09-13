#include "main.h"
/**
 * Print alphebets ten times 
 * Return - Alwasy 0
 */

void print_alphabet_x10(void)
{
	char x;

	for (x = 'a'; x < 'z'; x++)
	{
		int i;

		for (i = 0; i < 10; i++)
		{
			_putchar(x);
		}

	}

}
