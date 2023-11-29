#include "lists.h"



/**
 * create_new_node - to create new node
 * @n: the integer it accepts
 * Return: pointer to the node
 */
listint_t *create_new_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}

/**
 * insert_nodeint_at_index - indent for node
 * @head: the head pointer
 * @idx: the unsigned integer
 * @n: the number to be inserted into the node
 * Return: it returns the address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *tempold;
	listint_t *new_node;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
		*head = new_node;
	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = temp;
	else
	{
		tempold = temp->next;
		temp->next = new_node;
		new_node->next = tempold;
	}
	return (new_node);

}
