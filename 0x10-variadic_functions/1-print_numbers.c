#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers taken
 * @separator: the comma that will be between numbers
 * @n: the number of numbers you want to printed
 * Return: returns nothing because it is void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(arg, const unsigned int);

		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
