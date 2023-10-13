#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - takes in the sum of all the numbers you want added
 * @n: the number of integers you will be receiving
 * Return: this function returns sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;

	unsigned int i, sum;

	va_start(arg, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}

	va_end(arg);

	return (sum);
}
