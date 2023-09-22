#include "main.h"

/**
 * _strcat - concatanetae two strings 
 *
 * @dest: one of the arguments that takes in strings and is returned after the null 
 * byte at the end is over written 
 * @src: another argument that is concantenated to dest 
 *
 * Return: Return the value of dest as it is overwriotten by the concantenated string
 */

char *_strcat(char *dest, char *src)
{
	int j;

	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);


}
