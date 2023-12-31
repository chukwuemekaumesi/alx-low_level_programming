#include "main.h"

/**
 * factorial - multiplication of lower numbers
 * @n: the integer taken
 * Return: the factorial of the number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
