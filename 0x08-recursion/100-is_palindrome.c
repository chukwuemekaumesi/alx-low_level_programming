#include "main.h"

/**
 * strnlen_1 - gives us string length
 * @s: takes in string
 * Return: return string length
 */

int strnlen_1(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + strnlen_1(s + 1));
	}
}




/**
 * compare_str - compare string characters
 * @s: the string
 * @left: first compare
 * @right: second compare
 * Return: int
 */

int compare_str(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
		{
			return (1);
		}
		return (0 + compare_str(s, left + 1, right - 1));
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
		return (compare_str(s, 0, strnlen_1(s) - 1));
	}
}
