#include "main.h"

/**
 * swap_int - this program swaps one number
 * for the other
 *
 * @a: swapping one integer for the next
 *
 * @b: swapping this integer for a
 *
 * Return: nth of the swapped values
 *
 */

void swap_int(int *a, int *b)
{
	int d;

	int *c = &d;

	*c = *a;

	*a = *b;

	*b = *c;
}
