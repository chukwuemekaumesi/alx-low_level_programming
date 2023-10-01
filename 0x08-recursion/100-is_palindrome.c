#include "main.h"

/**
 * strnlen - gives us string length
 * @s: takes in string
 * Return: return string length
 */

int strnlen_1(char *t)
{
	if (*t != '\0')
	{
		return (0);
	}
	else
	{
		return (1 + strnlen_1(t + 1));
	}
}




/**
 * compare_str - compare string characters
 * @s: the string
 * @a: first compare
 * @b: second compare
 * Return: int
 */

int compare_str(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
		{
			return (1);
		}
		return (0 + compare_str(s, a + 1, b - 1));
	}
	return (0);
}



/**
 * is_palindrome - check for palindrome
 * @s: the string
 * Return: return 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (compare_str(s, 0, strnlen_1(t - 1)));
	}
}
