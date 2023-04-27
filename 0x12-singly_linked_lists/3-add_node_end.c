#include "lists.h"

/**
* add_node_end - Adds a node to end of linked list
* @head: Head of linked list
* @str: Node data
* Return: Pointer to head of linked list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr = *head;
	list_t *node;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (!(*head))
	{
		*head = node;
		return (*head);
	}

	while (curr && curr->next)
		curr = curr->next;

	curr->next = node;

	return (*head);
}
