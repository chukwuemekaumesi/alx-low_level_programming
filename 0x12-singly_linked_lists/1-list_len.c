#include "lists.h"

/**
 * list_len - elements in a linked list
 * @h: the header pointer
 * Return: return number of elements
 */

size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
