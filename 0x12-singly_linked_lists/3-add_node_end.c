#include "lists.h"
int length(const char *str);
list_t *node_create(const char *string);

/**
 * *add_node_end - create something
 * @head: the pointer to the head
 * @str: the string
 * Return: return the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	temp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	new_node = node_create(str);
	
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (*head);
}

/**
 * node_create - a function that creates nodes
 * @string: the string passed
 * Return: return sthe node created
 */

list_t *node_create(const char *string)
{
	list_t *newer;

	newer = malloc(sizeof(list_t));

	if (newer == NULL)
		return (NULL);
	newer->str = strdup(string);
	newer->len = length(string);
	newer->next = NULL;
	return (newer);
}

/**
 * length - the lenght of string
 * @str: the string to be found its length
 * Return: return string length
 */

int length(const char *str)
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
