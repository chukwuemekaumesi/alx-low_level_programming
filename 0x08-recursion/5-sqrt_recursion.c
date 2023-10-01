#include "main.h"

/**
 * sqr_a - checks for squareroot
 * @a: first integer
 * @b: second integer
 * Return: squareroot or -1
 */

int sqr_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > 4)
	{
		return (-1);
	}
	else
	{
		return (sqr_a(a, b + 1));
	}
}

/**
 * _sqrt_recursion - the squareroot returned
 * @n: main integer
 * Return: returns the squareroot
 */

int _sqrt_recursion(int n)
{
	return (sqr_a(n, 0));
}
