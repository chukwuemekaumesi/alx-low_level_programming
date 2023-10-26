#include "lists.h"

/**
 * sum_listint - sum up the lists
 * @head: the head
 * Return: the sum of the list
 */



int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
