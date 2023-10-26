#include "lists.h"
/**
 * reverse_listint - reverse a string
 * @head: pointer to the head
 * Return: it returns a pointer to the first element
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp_new;

	if (head == NULL && *head == NULL)
		return (NULL);
	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		temp_new = (*head)->next;
		(*head)->next = temp;
		temp = *head;

		if (temp_new == NULL)
			return (*head);
		*head = temp_new;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
