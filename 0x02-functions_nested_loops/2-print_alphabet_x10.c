#include "main.h"
/**
 * Print alphebets ten times 
 * Return - Alwasy 0
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		char  x;

		for (x = 'a'; x < 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}

}
