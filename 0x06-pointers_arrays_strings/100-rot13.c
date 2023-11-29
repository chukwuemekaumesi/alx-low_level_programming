#include "main.h"

/**
 * rot13 - the string flipper
 * @str: take the string
 * Return: the flipped string
 */

char *rot13(char str*)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = d[j];
				break;
			}
		}
	}
	return (str);
}
