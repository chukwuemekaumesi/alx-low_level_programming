#include <stdio.h>

/**
 * Main - print its name
 * followed by a new name
 * @argc: number of command line argument
 * @argv: the array that contains the commands
 * Return: 0 as success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
