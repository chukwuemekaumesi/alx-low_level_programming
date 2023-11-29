#include "main.h"

/**
 * prime_check - check for prime numner
 * @a: first number
 * @b: second number
 * Return: returns (0)
 */

int prime_check(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else
	{
		return (prime_check(a, b + 1));
	}
}

/**
 * is_prime_number - the prime guy
 * @n: integer taker
 * Return: returns (1)
 */

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}





















/**
 * is_prime_number - function for prime numbers
 * @n: the integer
 * Return: the prime number
 */
