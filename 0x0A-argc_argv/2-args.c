#include <stdio.h>

/**
 * main - the function prints out all the
 * arguments we print in command line
 * @argc: the number of commands taken
 * @argv: the arguments in strings
 *
 * Return: return 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
