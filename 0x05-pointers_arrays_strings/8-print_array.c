#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the arrays based on the number of the pointer
 *
 * @a: The number of times the array should be printed
 *
 * @n: the array, i believe, that is passed
 *
 * Return: like many void functions, this returns nothing
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");

}
