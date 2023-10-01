#include "main.h"

/**
 * _pow_recursion - power recurssion
 * @x: the first integer
 * @y: the one raised to power of
 * Return: Return the value of power
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
