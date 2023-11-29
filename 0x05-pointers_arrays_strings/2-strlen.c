#include "main.h"

/**
 * _strlen - it checks for the length
 * of a string
 *
 * @s: the string that the function checks for
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int total_len;

	total_len = 0;

	while (s[total_len] != '\0')
	{
		total_len++;
	}

	return (total_len);
}

