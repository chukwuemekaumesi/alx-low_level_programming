#include "main.h"

/**
 * _strncpy - copies strings from one place to the next
 *
 * @dest: one of the string arguments
 *
 * @src: the string from here
 * is added to the dest string
 *
 * @n: the integer for the string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	while (j < n && src[j] != 0)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest)
}
