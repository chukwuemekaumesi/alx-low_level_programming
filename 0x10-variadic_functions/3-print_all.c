#include "variadic_functions.h"
/**
 * print_all - prints out so many types of variables
 * @format: takes in all the format of string to be printed
 * Return: returns the argument given
 */
void print_all(const char * const format, ...)
{
	int i = 0, chec_stat;
	char *str;
	va_list formatted;

	va_start(formatted, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(formatted, int));
				chec_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(formatted, double));
				chec_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(formatted, int));
				chec_stat = 0;
				break;
			case 's':
				str = va_arg(formatted, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				chec_stat = 0;
				break;
			default:
				chec_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && chec_stat == 0)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(formatted);
}
