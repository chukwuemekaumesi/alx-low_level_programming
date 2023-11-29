#include "lists.h"

/**
 * free_listint - frees space
 * @head: the head of the linked list
 * Return: does not return anything
 * cause it is void
 */

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}
}
