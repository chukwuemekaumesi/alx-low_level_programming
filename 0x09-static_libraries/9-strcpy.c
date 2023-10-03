#include "main.h"

/**
 * _strcpy - this copies strings that src points to
 *
 * @dest: this is the return value, and where he second argument is copied into
 *
 * @src: the main string that gets copied into dest
 *
 * Return: the function returns th copied string, dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++);
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
