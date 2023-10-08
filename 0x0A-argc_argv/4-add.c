#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: the commands taken, this time
 * in numbers
 *
 * Return: return 0 if successful
 * and 1 if the command arguments have a string
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc < 1)
		{
			printf("0\n");
		}
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return (1);
			}
		}
		add += atoi(argv[i]);

	}

	printf("%d\n", add);
	return (0);

}

