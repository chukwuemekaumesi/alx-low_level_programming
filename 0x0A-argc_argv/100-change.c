#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins
 * to make a change for an amount
 * @argc: counts the number of arguments
 * @argv: one amount of change
 * that will then print out how mnay coins will be given
 *
 * Return: return 0 is successful
 * but if not, return 1
 */

int main(int argc, char *argv[])
{
	int cents, mcoin = 0;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		if (cents >= 10)
		{
			cents -= 10;
		}
		if (cents >= 5)
		{
			cents -= 5;
		}
		if (cents >= 2)
		{
			cents -= 2;
		}
		if (cents >= 1)
		{
			cents -= 1;
		}
		mcoin += 1;
	}
	printf("%d\n", mcoin);
	return (0);

}
