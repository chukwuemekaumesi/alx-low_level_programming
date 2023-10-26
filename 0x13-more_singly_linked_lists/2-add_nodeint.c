#include "lists.h"

/**i
 * add_nodeint - add a node at the beginning
 * @head: the head of the node
 * @n: the integer that will be passed
 * Return: the nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;
	*head = new;

	return (0);
}
