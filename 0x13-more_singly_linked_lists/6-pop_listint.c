#include "lists.h"

/**
 * pop_listint - delete a list
 * @head: pointer to the list
 * Retur: it returns integer
 */


int pop_listint(listint_t **head)
{
	int no;

	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	no = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (no);
}
