#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the result of arguments
 * @argc: the number of arguments
 * @argv: the aruguments in string
 *
 * Return: return 0 if successful
 * and return 1 if not successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int multiply = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", multiply);

		return (0);
	}
}
