#include "lists.h"
#include <string.h>
int lent(const char *str);
/**
 * add_node - add node to the beginning
 * @head: pointer to the pointer to the head
 * @str: the string
 * Return: return pointer to the first node
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
			new->next = *head;
		new->str = strdup(str);
		new->len = lent(str);
		*head = new;
	return (*head);
}

/**
 * * lent - get the length of the string
 * @str: the string to get its lenth
 * Return: return the lenth of the string
 */

int lent(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}



