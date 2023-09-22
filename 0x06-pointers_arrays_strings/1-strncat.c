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

    int dest_len;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    dest_len = i;

    j = 0;
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    if (j == n)
    {
        dest[i] = '\0';
    }
    else
    {
        // The destination string does not have enough space.
        // Handle this error condition here.
    }

    return (dest);
}
