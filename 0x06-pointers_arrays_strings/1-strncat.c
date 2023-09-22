#include "main.h"
/**
 * _strncat - Takes in two strings
 * using at most two a byte
 *
 * @dest: the argument that stores
 * the concatenated strings
 * @src: the strings used
 * @n: number of words
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
