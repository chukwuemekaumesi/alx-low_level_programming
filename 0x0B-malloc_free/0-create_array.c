#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - the function for memory allocation
 * @size: takes the size of the character
 * @c: collects the characters, strings
 * Return: returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
