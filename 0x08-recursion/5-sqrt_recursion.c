#include "main.h"

/**
 * square_root - checks if a number has natural
 * suqare root
 * @q: the interator
 * @p: the integer taken
 * Return: the square
 */

int square_root(int p, int q)
{
	p = 1;

	if (q * q == p)
	{
		return (q);
	}
	else if (q < n)
	{
		square_root(p, ++q);
	}
	else
	{
		return (-1);
	}
}



/**
 * _sqrt_recursion - gives me the square of a number
 * @n: the integer collected
 * Return: the squareroot of n
 */

int _sqrt_recursion(int n)
{
	int square_root(int p, int q);

	return (square_root(n, q));
}
