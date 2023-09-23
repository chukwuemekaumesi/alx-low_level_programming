#include "main.h"

/**
 * leet - uses numbers for words
 * @str: the string it takes
 * Return: returns the string it took, but in numbers
 */

char *leet(char *str)
{
	int i, j;

	char c[] = "aAeEoOtTlL";

	char n[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = n[j];
			}
		}
	}
	return (str);
}
