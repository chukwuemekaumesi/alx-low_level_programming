#include "lists.h"

/**
 * free_list - free list
 * @head: the head pointer
 * Return: returns nothing
 */

void free_list(listp_t**head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe -prints a linked list
 * @head: the head
 * Return: return the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int nodes = 0;
	listp_t *hptr, *name, *add, *new;
	hptr = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit (98);
		new->p = (void *)head;
		
		new->next = hptr;
		hptr = new;
		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n",(void *)head, head->next);
				free_list(&htpr);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_list(&hptr);
	return (nodes);
}
