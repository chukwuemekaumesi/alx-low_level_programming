#include "lists.h"

/**
 * get_nodeint_at_index - get the node int at index nth
 * @head: the head pointer
 * @index: the index you want taken
 * Return: return the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cap;

	for (cap = 0; cap < index; cap++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
