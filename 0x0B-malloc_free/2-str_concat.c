#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate string
 * @s1: the first string taken
 * @s2: the second string taken
 * Return: return concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		ptr[k] = s2[l];
		l++;
	}
	return (ptr);


}
