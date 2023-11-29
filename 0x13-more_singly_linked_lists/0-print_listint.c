#include "lists.h"
/**
 * print_listint - prints all the elements in the list
 * @h: takes in the lists data
 * Return: the value of h
 */

size_t print_listint(const listint_t *h)
{
	unsigned int counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (counter);

}
