#include "main.h"

/**
 * rev_string - take the string and reverse it
 *
 * @s: take the string that should be reversed 
 *
 * Return: returning nothing because it is a void function
 *
 */

void rev_string(char *s)
{
	int len;

	int i;

	char temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
