#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	int last_digit;

	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
		printf("%s %i is %i and is greater than 5\n", str, n, last_digit);
	if (last_digit == 0)
		printf("%s %i is %i and is 0\n", str, n, last_digit);
	if (last_digit < 6 && last_digit == 0)
		printf("%s %i is %i and is less than 6 and not 0", str, n, last_digit);

	return (0);
}
