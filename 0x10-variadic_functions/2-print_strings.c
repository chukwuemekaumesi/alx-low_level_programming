#include "variadic_functions.h"

/**
 * print_strings - prints put the strings collected
 * @separator: the separator for the strings to be passed
 * @n: the number of strings you want to pass
 * Return: returns nothing cause it is void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *arr;

	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(string, char *);
		if (arr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", arr);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(string);
}
