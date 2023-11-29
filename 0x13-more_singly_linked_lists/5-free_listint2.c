#include "lists.h"

/**
 * free_listint2 - frees list int
 * @head: the head of the linked list
 * Return: does not return anything
 */

void free_listint2(listint_t **head)
{
	listint_t *tempi;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tempi = (*head)->next;
		free(*head);
		*head = tempi;
	}
	free(*head);
	*head = NULL;
}
