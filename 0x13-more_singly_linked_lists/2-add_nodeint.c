#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a node at the beginning
 * @head: the head of the node
 * @n: the integer that will be passed
 * Return: the nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
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
