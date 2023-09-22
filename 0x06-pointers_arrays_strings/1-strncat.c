#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: the argument that stores the concatenated strings
 *
 * @src: the strings used
 *
 * @n: the number of strings that will be used
 *
 * Return: It returns the dest argument
 */

char *_strcat(char *dest, char *src, int n)
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
