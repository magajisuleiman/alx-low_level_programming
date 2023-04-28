#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: double pointer to list_t list
 * @str: new string
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	/* create a new pointer to the list_t structure*/
	list_t *new_node;
	unsigned int i;

	i = 0;

	while (str[i])
		i++;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	(*new_node).str = strdup(str);
	(*new_node).len = i;
	(*new_node).next = (*head);
	*head = new_node;

	return (new_node);
}

