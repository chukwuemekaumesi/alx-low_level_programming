#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of the list
 * @head: the head of the linked list
 * @n: the numbers passed
 * Return: it returns the head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temporary;

	(void)temporary;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temporary = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temporary->next != NULL)
		{
			temporary = temporary->next;
		}
		temporary->next = new;
	}
	return (*head);
}
