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
	int i;

	int j;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}


}
