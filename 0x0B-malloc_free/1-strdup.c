#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy string and place in new location
 * @str: string pointer
 * Return: return NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	strdout = (char *)malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		strdout[j] = str[j];
	}
	return (strdout);

}
