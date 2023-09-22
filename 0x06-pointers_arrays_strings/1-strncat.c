#include "main.h"

/**
 * _strncat - Takes in two strings
 * using at most two a byte
 *
 * @dest: the argument that stores the concatenated strings
 *
 * @src: the strings used
 *
 * @n: the number of strings that will be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	int j;

	i = 0;
	while (dest != '\0')
	{
		i++;
	}

	j = 0;
	while (src != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
