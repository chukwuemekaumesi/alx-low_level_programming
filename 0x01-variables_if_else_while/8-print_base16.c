#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int n = 0; n < 16; n++)
	{
		putchar(n % 16 + '0');
	}

	putchar('\n');
	return (0);
}
