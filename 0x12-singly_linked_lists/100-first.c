#include "lists.h"
void print_things_out(void)__attribute__((constructor));

/**
 * print_things_out - functions that runs before the main faunction
 */

void print_things_out(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
