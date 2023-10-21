#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - a singly linked list
 * @str: the string collected, already malloced
 * @length: the lenght of the string
 * @next: the pointer to the next node
 * description: the main guy for listing
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);

#endif
