#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node at the end of a linked list
 * @head: point to list_t structure
 * @str: sting to be atted at the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node;
	list_t *temp = *head;
	unsigned int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	(*new_node).str = strdup(str);
	(*new_node).len = i;
	(*new_node).next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while ((*temp).next)
		temp = (*temp).next;
	(*temp).next = new_node;
	return (new_node);

}

