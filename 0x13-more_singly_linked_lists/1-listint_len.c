#include "lists.h"

/**
 * listint_len - prints the length of the data
 * @h: the header passed
 * Return: it returns the number of data passed
 */

size_t listint_len(const listint_t *h)
{
	unsigned int added;

	if (h == NULL)
		return (0);
	for (added = 0; h != NULL; added++)
	{
		h = h->next;
	}
	return (added);
}
